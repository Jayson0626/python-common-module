#! /usr/bin/env python

# Copyright (c) 2014 Freescale Semiconductor, Inc.
# All rights reserved.
#
# Redistribution and use in source and binary forms, with or without modification,
# are permitted provided that the following conditions are met:
#
# o Redistributions of source code must retain the above copyright notice, this list
#   of conditions and the following disclaimer.
#
# o Redistributions in binary form must reproduce the above copyright notice, this
#   list of conditions and the following disclaimer in the documentation and/or
#   other materials provided with the distribution.
#
# o Neither the name of Freescale Semiconductor, Inc. nor the names of its
#   contributors may be used to endorse or promote products derived from this
#   software without specific prior written permission.
#
# THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND CONTRIBUTORS "AS IS" AND
# ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT LIMITED TO, THE IMPLIED
# WARRANTIES OF MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE ARE
# DISCLAIMED. IN NO EVENT SHALL THE COPYRIGHT HOLDER OR CONTRIBUTORS BE LIABLE FOR
# ANY DIRECT, INDIRECT, INCIDENTAL, SPECIAL, EXEMPLARY, OR CONSEQUENTIAL DAMAGES
# (INCLUDING, BUT NOT LIMITED TO, PROCUREMENT OF SUBSTITUTE GOODS OR SERVICES;
# LOSS OF USE, DATA, OR PROFITS; OR BUSINESS INTERRUPTION) HOWEVER CAUSED AND ON
# ANY THEORY OF LIABILITY, WHETHER IN CONTRACT, STRICT LIABILITY, OR TORT
# (INCLUDING NEGLIGENCE OR OTHERWISE) ARISING IN ANY WAY OUT OF THE USE OF THIS
# SOFTWARE, EVEN IF ADVISED OF THE POSSIBILITY OF SUCH DAMAGE.

#!/usr/bin/env python
# coding=utf-8

#*******************************************************************
#* Copyright (c) 2016 Freescale Semiconductor Inc.
#* All rights reserved.
#*
#* Use of Freescale code is governed by terms and conditions
#* stated in the accompanying licensing statement.
#* Description: helper function.
#*
#* Revision History:
#* -----------------
#* Code Version    YYYY-MM-DD    Author        Description
#* 0.1             2018-02-25    Kris Wang     Create this file
#*******************************************************************
import os
import sys
import inspect
import subprocess
import pytest 
from collections import namedtuple

filePath = os.path.abspath(os.path.dirname(__file__)).replace('\\', '/')
mainPath = os.path.abspath(os.path.join(filePath, '../..')).replace('\\', '/')
sys.path.append(mainPath) # add application path to env

from log import logging_init
from bl_function.run_pytest import RunPytest
from bl_case_lib import bl_case_lib

# Import all the module test cases from case lib 
from bl_case_lib.bl_case_lib import TestCase_Property
from bl_case_lib.bl_case_lib import TestCase_Flash
from bl_case_lib.bl_case_lib import TestCase_SRAM
from bl_case_lib.bl_case_lib import TestCase_SBFile
from bl_case_lib.bl_case_lib import TestCase_Boot
from bl_case_lib.bl_case_lib import TestCase_Call
from bl_case_lib.bl_case_lib import TestCase_Execute
from bl_case_lib.bl_case_lib import TestCase_CRC
from bl_case_lib.bl_case_lib import TestCase_BCA
from bl_case_lib.bl_case_lib import TestCase_BackDoorKey
from bl_case_lib.bl_case_lib import TestCase_ReliableUpdate
from bl_case_lib.bl_case_lib import TestCase_LtcMMCAU
from bl_case_lib.bl_case_lib import TestCase_QSPI
from bl_case_lib.bl_case_lib import TestCase_OTFAD
from bl_case_lib.bl_case_lib import TestCase_SecurityBoot
from bl_case_lib.bl_case_lib import TestCase_Authentication


##################################################################################################
if __name__ == '__main__':
    # K22 supports following test modules
    TestCase_Module = [
        TestCase_Property,
        TestCase_Flash,
        TestCase_SRAM,
        TestCase_SBFile,
        TestCase_Boot,
        TestCase_Call,
        TestCase_Execute,
        TestCase_CRC,
        TestCase_BCA,
        TestCase_BackDoorKey, 
    ]

    targetName                              =   'K22F51212'
    projectName                             =   'freedom_bootloader'
    ide                                     =   'iar'
    build                                   =   'release'
    targetUartPort                          =   'COM9'
    buspalUartPort                          =   'COM12'
    os.environ['JLINK_USB_ID']              =   '1081050133' 
    os.environ['KIBBLE_TARGET_NAME']        =   targetName
    os.environ['KIBBLE_PROJECT_NAME']       =   projectName
    os.environ['KIBBLE_COMPILER']           =   ide
    os.environ['KIBBLE_BUILD_VERSION']      =   build 
    os.environ['KIBBLE_PROJECT_PATH']       =   r'C:\Jay\Test_Case\Manual_Test\REL9\RC3\SDK_2.5.0_FRDM-K22F\boards\frdmk22f\bootloader_examples'
    os.environ['KIBBLE_PLATFORM']           =   os.path.split(os.path.split(os.environ['KIBBLE_PROJECT_PATH'])[0])[-1]


    peripheralParams = namedtuple('peripheralParameters', 'peripheral, speed, port')
    peripheralParamsDict = {
                                'uart' : peripheralParams('uart', '57600',  targetUartPort),
                                'i2c'  : peripheralParams('i2c', '800',     buspalUartPort),
                                'spi'  : peripheralParams('spi', '600',     buspalUartPort),
                                # For can: '0' means 125k, '1' means 250k, '2' means 500k, '4' means 1M
                                'can'  : peripheralParams('can', '0',       buspalUartPort),
                                'usb'  : peripheralParams('usb', '',        '')
                           }
    # Specify which peripherals to run the test.
    # Note, here you can specify one or more supported peripherals.
    peripherals = ['uart']
    

    log_file = os.path.join(mainPath, 'log', 'test_run_%s.log' %(targetName)).replace('\\', '/')
    f = open(log_file, 'w+')
    f.close()
    logging_init.logging_init(log_file) 


    # Run Auto Test
    test = RunPytest(targetName, projectName, ide, build, peripheralParamsDict)
    caseList = test.collect_test_cases(TestCase_Module)
    # caseList =['test_core0_receive_sb_file.py::TestCore0SbOperateSram0::test_core0_sb_write_all_of_available_ram0']
    reportFile = test.run_pytest(caseList, peripherals, showLog = False)

    Send Auto Test Result
    test.send_email(mail_to = ['haojie.shen@nxp.com'], 
                    mail_cc = [''], 
                    attachment = reportFile)

