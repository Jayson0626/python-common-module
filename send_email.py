#!/usr/bin/python3
#-*- coding: utf-8 -*-
# @FileName: email.py
# @Time    : 2020/5/27 22:06
# @Author  : Jayson
# @Email   : Jayson2050@163.com


import os
import sys
import smtplib
from email.mime.multipart import MIMEMultipart
from email.mime.text import MIMEText
from email.mime.image import MIMEImage
from email.mime.base import MIMEBase
from email import encoders
from email import utils
from email.header import Header

# sys.path.append(os.path.abspath("../testReport"))



class SendEmail():
    def __init__(self, mail_to_list, mail_cc_list):
        self.mail_host = '192.168.8.253'
        self.mail_from = 'SW-Developer' + '@' + 'xel-tech.com'
        self.mail_to = mail_to_list
        self.mail_cc = mail_cc_list

    def send_email(self, subject, content, attachment):
        # Create a root container
        main_msg = MIMEMultipart('alternative')
        # Create a text container to show the contents of the email
        text_msg = MIMEText(content, 'plain', 'utf-8')

        # Attach the contents
        main_msg.attach(text_msg)
        contype = 'ISE/Policy'
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
        main_msg['From'] = self.mail_from
        main_msg['To'] = ','.join(self.mail_to)
        main_msg['Cc'] = ','.join(self.mail_cc)
        main_msg['Date'] = utils.formatdate()

        server = smtplib.SMTP()
        try:
            server.connect(self.mail_host)
            server.sendmail(self.mail_from, self.mail_to + self.mail_cc, main_msg.as_string())
            print("邮件发送成功!")
            server.quit()
        except smtplib.SMTPException:
             print("Error: 无法发送邮件!")



# sender = 'jayson2050@163.com'
# receivers = ['jayson2050@163.com']
xel_sender = 'shen.haojie@xel-tech.com'
xel_receivers = ['shen.haojie@xel-tech.com']  # 接收邮件，可设置为你的QQ邮箱或者其他邮箱

# 三个参数：第一个为文本内容，第二个 plain 设置文本格式，第三个 utf-8 设置编码
msg = MIMEText('XEL','plain', 'utf-8')
msg['From'] = Header("Jayson", 'utf-8')  # 发送者
msg['To'] = Header("shj", 'utf-8')  # 接收者
subject = 'ISE Test Report of Ceres'
msg['Subject'] = Header(subject, 'utf-8')
host = "192.168.8.253"
try:
    smtpObj = smtplib.SMTP(host)
    smtpObj.sendmail(xel_sender, xel_receivers, msg.as_string())
    print("邮件发送成功")
except smtplib.SMTPException:
    print("Error: 无法发送邮件")




import traceback
from email.utils import formataddr

from email.mime.text import MIMEText

for emails in open("test.py",'r'):
    #   设置服务器
    mail_host = "192.168.8.253"

    #   发件箱后缀
    mail_postfix = "xel-tech.com"


    def send_mail(to_list, sub, content):
        # me = ("%s<"+mail_user+"@"+mail_postfix+">")%(Header('中文汉字','utf-8'),)
        me = formataddr(["shj", "<"  + "@" + mail_postfix + ">"])
        msg = MIMEText(content, _subtype='plain', _charset='utf8')  # 设置为文本格式邮件
        msg['Subject'] = sub  # 设置主题
        msg['From'] = me
        msg['To'] = to_list  # 收件人
        try:
            s = smtplib.SMTP()
            s.connect(mail_host)  # 连接smtp服务器
            # s.login(mail_user, mail_pass)  # 登陆服务器
            s.sendmail(me, to_list, msg.as_string())  # 发送邮件
            s.close()
            return True
        except:
            traceback.print_exc()
            return False


    # 发送失败的邮箱放入集合
    FalseSend = []
    # title：主题；content：邮件内容
    content = "提醒各位，" \
              "这个zip文件中没有包含 flask 虚似环境的配置，" \
              "所以你需要自已创建运行环境。"
    title = "上周工作总结"

    if send_mail(emails, title, content):  # 邮件主题和邮件内容
        print("[done!]:", emails)
    else:
        print("[failed!]：", emails)
        FalseSend.append(emails)

