import os
import sys 
import time
import datetime
import random 
import glob 
import pytest
import logging 

import smtplib
from email.mime.multipart import MIMEMultipart
from email.mime.text import MIMEText
from email.mime.image import MIMEImage
from email.mime.base import MIMEBase
from email import encoders
from email import Utils
from email.header import Header

filePath = os.path.abspath(os.path.dirname(__file__)).replace('\\', '/')
mainPath = os.path.abspath(os.path.join(filePath, '..')).replace('\\', '/')
sys.path.append(mainPath) # add application path to env

sys.path.append(os.path.abspath(os.path.join(mainPath, "testReport")))
import process_test_report



class RunPytest:
    def __init__(self, targetName, projectName, ide, build, peripheralParamsDict):
        self.targetName  = targetName
        self.projectName = projectName
        self.ide         = ide
        self.build       = build
        self.peripherals = []
        self.peripheralParamsDict = peripheralParamsDict

    # @breif Collect test cases from testCaseModule according to the projectName.
    # @param  testCaseModule    test cases for each module
    # @param  projectName       'freedom_bootloader'
    #                           'tower_bootloader'
    #                           'maps_bootloader'
    #                           'flashloader'
    #                           'flashloader_loader'
    #                           'rom_fpga'
    #                           'rom_tower'
    #                           'rom_freedom'
    #                           'rom_evb'
    def collect_test_cases(self, testCaseModule):
        caseList = []
        if self.projectName == 'flashloader' or self.projectName == 'flashloader_loader':
            bl_type = 'flashloader'
        elif self.projectName == 'freedom_bootloader' or self.projectName == 'tower_bootloader' or self.projectName == 'maps_bootloader':
            bl_type = 'bootloader'
        else:
            bl_type = 'ROM'

        for testModule in testCaseModule:
            for testCase, bootloaderType in testModule.items():
                if bl_type in bootloaderType:
                    caseList.append(testCase)
        return caseList

    # @breif Run the pytest and generate test report.
    # @param  caseList      Test cases 
    # @param  peripherals   Test peripherals
    # @param  showLog       True:  show the testing logs while running test cases
    #                       False: not show logs
    def run_pytest(self, caseList, peripherals = ['uart', 'usb'], showLog = False):
        self.peripherals = peripherals
        # Generate a directory to store the test reports.
        ts = time.time()
        dirName = self.targetName.upper() #+ datetime.datetime.fromtimestamp(ts).strftime('_%Y_%m_%d_%H_%M_%S')
        dirPath = os.path.abspath(os.path.join(mainPath, 'testReport', dirName))
        if not os.path.isdir(dirPath): 
            os.makedirs(dirPath)

        # Run the tests over all the specified peripherals
        caseFolder = os.path.abspath(os.path.join(mainPath, 'PyUnitTests'))
        os.chdir(caseFolder)
        peripheralReports = []
        for i in xrange(len(peripherals)):
            os.environ['KIBBLE_PERIPHERAL'] =   self.peripheralParamsDict[peripherals[i]].peripheral
            os.environ['KIBBLE_PORT']       =   self.peripheralParamsDict[peripherals[i]].port
            os.environ['KIBBLE_SPEED']      =   self.peripheralParamsDict[peripherals[i]].speed
            xmlFile = os.path.join(dirPath, '%s_run_test_result.xml' %(peripherals[i])).replace('\\', '/')
            if(showLog == True):
                args = '-v -s %s --junitxml=%s' %(' '.join(caseList), xmlFile)
            else:
                args = '-v    %s --junitxml=%s' %(' '.join(caseList), xmlFile)
            print("%s %s test on %s peripheral:"%(self.targetName.upper(), self.projectName, peripherals[i].upper()))
            pytest.main(args)
            
            peripheralReports.append({})
            peripheralReports[i][0] = xmlFile

        # Generate test report
        htmlFile = os.path.abspath(os.path.join(dirPath, '%s_auto_test_result.html'))
        if(self.projectName.lower().find('rom') != -1):
            title = "Automation Test Report for %s ROM" %(self.targetName.upper())
            htmlFile = os.path.abspath(os.path.join(dirPath, '%s_ROM_Test_Result.html'%self.targetName.upper()))
        else:
            title = "Automation Test Report for %s %s %s-%s Build" %(self.targetName.upper(), self.projectName, self.ide.upper(), self.build.capitalize())
            htmlFile = os.path.abspath(os.path.join(dirPath, '%s_%s_%s_%s_Test_Result.html'%(self.targetName.upper(), self.projectName, self.ide.upper(), self.build.capitalize())))
        args = [
                    '--title='+title, 
                    '--subtitle=Running Peripheral: %s'%(", ".join(peripherals).upper()),
                    '-o',
                    htmlFile,
                    '--'
                ]
        for i in xrange(len(peripheralReports)):
            args.append('%col=\n'+peripherals[i].upper())
            args.append(peripheralReports[i][0])
        process_test_report.TestReportProcessorTool().run(args)

        reportFile = args[3]
        return reportFile

    # @breif Send email.
    # @param: 
    #         mail_to        A email address list in the "To" field when sending a email
    #         mail_cc        A email address list in the "Cc" field when sending a email
    #         attachment     Email attachment
    #         subject        Email subject
    #         content        Email content
    def send_email(self, mail_to, mail_cc, attachment, subject = '', content = ''):
        if(self.projectName.lower().find('rom') != -1):
            subject = "Automation Test Report for %s ROM" %(self.targetName.upper())
            content = 'Hi All,\n\n' + \
                      'Here is the automation test report, please check.\n' + \
                      'Project:     ROM\n' + \
                      'Target:      %s\n'%(self.targetName.upper()) + \
                      'Peripheral:  %s\n'%(', '.join(self.peripherals).upper()) + \
                      'For the detailed test result, please see the attachment.\n\n' + \
                      'NOTE: This email is automatically sent by ROM Automation System.\n' + \
                      'Please DO NOT reply this email. Thanks.\n\n' + \
                      'Regards,\n' + \
                      'ROM Automation System'
        else:
            subject = "Automation Test Report for %s %s %s-%s Build" %(self.targetName.upper(), self.projectName, self.ide.upper(), self.build.capitalize())
            content = 'Hi All,\n\n' + \
                      'Here is the automation test report, please check.\n' + \
                      'Project:     %s\n'%(self.projectName) + \
                      'Target:      %s\n'%(self.targetName.upper()) + \
                      'IDE:         %s\n'%(self.ide.upper()) + \
                      'Build:       %s\n'%(self.build.capitalize()) + \
                      'Peripheral:  %s\n'%(', '.join(self.peripherals).upper()) + \
                      'For the detailed test result, please see the attachment.\n\n' + \
                      'NOTE: This email is automatically sent by ROM Automation System.\n' + \
                      'Please DO NOT reply this email. Thanks.\n\n' + \
                      'Regards,\n' + \
                      'ROM Automation System'

        mail_host = 'remotesmtp.freescale.net'
        mail_from = 'ROM_Automation_System' + '@' + 'NXP.COM'
        # Create a root container
        main_msg = MIMEMultipart('alternative')
        # Create a text container to show the contents of the email
        text_msg = MIMEText(content, 'plain', 'utf-8')

        # Attach the contents
        main_msg.attach(text_msg)
        contype = 'application/octet-stream'
        maintype, subtype = contype.split('/', 1)
        # Create attachment
        att = open(attachment, 'rb')
        att_msg = MIMEBase(maintype, subtype)
        # Read the contents of the attachment and format it
        att_msg.set_payload(att.read())
        att.close()
        encoders.encode_base64(att_msg)
        # Add the header for attachment
        att_msg.add_header('Content-Disposition', 'attachment', filename = attachment.split('\\')[-1])
        main_msg.attach(att_msg)
        # Set the attibutes for the root container
        main_msg['Subject'] = subject
        main_msg['From'] = mail_from
        main_msg['To'] = ','.join(mail_to)
        main_msg['Cc'] = ','.join(mail_cc)
        main_msg['Date'] = Utils.formatdate()

        server = smtplib.SMTP()
        server.connect(mail_host)
        server.sendmail(mail_from, mail_to+mail_cc, main_msg.as_string())
        server.quit()
        

