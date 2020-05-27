#!/usr/bin/python3
# -*- coding: utf-8 -*-
# @FileName: email.py
# @Time    : 2020/5/27 22:06
# @Author  : Jayson
# @Email   : Jayson2050@163.com

import smtplib
from email.mime.text import MIMEText
from email.header import Header


sender = 'jayson2050@163.com'
receivers = ['jayson2050@163.com']  # 接收邮件，可设置为你的QQ邮箱或者其他邮箱

# 三个参数：第一个为文本内容，第二个 plain 设置文本格式，第三个 utf-8 设置编码
message = MIMEText('Python 邮件发送测试...', 'plain', 'utf-8')
message['From'] = Header("邮箱测试", 'utf-8')  # 发送者
message['To'] = Header("我的163", 'utf-8')  # 接收者

subject = 'Python SMTP 邮件测试'
message['Subject'] = Header(subject, 'utf-8')

try:
    smtpObj = smtplib.SMTP('localhost')
    # smtpObj = smtplib.SMTP('D:\\Installation_Package\\Email-Server\\sendmail\\sendmail.exe')
    smtpObj.sendmail(sender, receivers, message.as_string())
    print("邮件发送成功")
except smtplib.SMTPException:
    print("Error: 无法发送邮件")