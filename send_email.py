#!/usr/bin/python3
# -*- coding: utf-8 -*-
# @FileName: email.py
# @Time    : 2020/5/27 22:06
# @Author  : Jayson
# @Email   : Jayson2050@163.com

import smtplib
from email.mime.multipart import MIMEMultipart
from email.mime.text import MIMEText
from email.header import Header
from email.mime.image import MIMEImage
from email.utils import formataddr

# import os
# import sys
# from email.mime.base import MIMEBase
# from email import encoders
# from email import utils


# sys.path.append(os.path.abspath("../testReport"))


# class SendEmail():
#     def __init__(self, mail_to_list, mail_cc_list):
#         self.mail_host = '192.168.8.253'
#         self.mail_from = 'SW-Developer' + '@' + 'xel-tech.com'
#         self.mail_to = mail_to_list
#         self.mail_cc = mail_cc_list
#
#     def send_email(self, subject, content, attachment):
#         # Create a root container
#         main_msg = MIMEMultipart('alternative')
#         # Create a text container to show the contents of the email
#         text_msg = MIMEText(content, 'plain', 'utf-8')
#
#         # Attach the contents
#         main_msg.attach(text_msg)
#         contype = 'ISE/Policy'
#         maintype, subtype = contype.split('/', 1)
#         # Create attachment
#         att = open(attachment, 'rb')
#         att_msg = MIMEBase(maintype, subtype)
#         # Read the contents of the attachment and format it
#         att_msg.set_payload(att.read())
#         att.close()
#         encoders.encode_base64(att_msg)
#         # Add the header for attachment
#         att_msg.add_header('Content-Disposition', 'attachment', filename = attachment.split('\\')[-1])
#         main_msg.attach(att_msg)
#         # Set the attibutes for the root container
#         main_msg['Subject'] = subject
#         main_msg['From'] = self.mail_from
#         main_msg['To'] = ','.join(self.mail_to)
#         main_msg['Cc'] = ','.join(self.mail_cc)
#         main_msg['Date'] = utils.formatdate()
#
#         server = smtplib.SMTP()
#         try:
#             server.connect(self.mail_host)
#             server.sendmail(self.mail_from, self.mail_to + self.mail_cc, main_msg.as_string())
#             print("邮件发送成功!")
#             server.quit()
#         except smtplib.SMTPException:
#              print("Error: 无法发送邮件!")
#


# sender = 'jayson2050@163.com'
# receivers = ['jayson2050@163.com']
# # sender_xel = 'shen.haojie@xel-tech.com'
# # to_xel = ['shen.haojie@xel-tech.com']  # 接收邮件，可设置为你的QQ邮箱或者其他邮箱
#
# # 三个参数：第一个为文本内容，第二个 plain 设置文本格式，第三个 utf-8 设置编码
# msg = MIMEText('XEL','plain', 'utf-8')
# msg['From'] = Header("Jayson", 'utf-8')  # 发送者
# msg['To'] = Header("shj", 'utf-8')  # 接收者
# subject = 'ISE Test Report of Ceres'
# msg['Subject'] = Header(subject, 'utf-8')
# host_xel = "192.168.8.253"
# host_163 = "smtp.163.com"
# try:
#     smtpObj = smtplib.SMTP(host_163)
#     smtpObj.sendmail(sender, receivers, msg.as_string())
#     print("邮件发送成功")
# except smtplib.SMTPException:
#     print("Error: 无法发送邮件")


## 第三方 SMTP 服务
# mail_host = "smtp.163.com"  # 设置服务器
# mail_user = "jayson2050@163.com"  # 用户名
# mail_pwd = "XBIYLCQXBDWYULCZ"  # 口令
# sender = 'jayson2050@163.com'
# receivers = ['jayson2050@163.com']  # 接收邮件，可设置为你的QQ邮箱或者其他邮箱


##XEL-server


##html content

# mail_msg = """
# <p>Python 邮件发送测试...</p>
# <p><a href="http://www.runoob.com">这是一个链接</a></p>
# """
#
# message = MIMEText(mail_msg, 'html', 'utf-8')
# # message = MIMEText(mail_msg, 'plain', 'utf-8') # content is text format
# message['From'] = Header("发送者", 'utf-8')
# message['To'] = Header("接收者", 'utf-8')
#
# subject = 'Python SMTP 邮件测试'
# message['Subject'] = Header(subject, 'utf-8')
#
# try:
#     smtpObj = smtplib.SMTP()
#     smtpObj.connect(mail_host, 25)  # 25 为 SMTP 端口号
#     smtpObj.login(mail_user, mail_pass)
#     smtpObj.sendmail(sender, receivers, message.as_string())
#     print("邮件发送成功")
#     smtpObj.quit()
# except smtplib.SMTPException:
#     print("Error: 无法发送邮件")


## With attachment test
## 创建一个带附件的实例

# message = MIMEMultipart()
# message['From'] = Header("发送者", 'utf-8')
# message['To'] = Header("接收者", 'utf-8')
#
# subject = 'Python SMTP 附件测试'
# message['Subject'] = Header(subject, 'utf-8')
#
# # 邮件正文内容
# message.attach(MIMEText('Python 发送附件测试', 'plain', 'utf-8'))
#
# # 构造附件1，传送当前目录下的 test.txt 文件
# att1 = MIMEText(open('虚拟环境说明.docx', 'rb').read(), 'base64', 'utf-8')
# att1["Content-Type"] = 'application/octet-stream'
# # 这里的filename可以任意写，写什么名字，邮件中显示什么名字
# # att1["Content-Disposition"] = 'attachment; filename="虚拟环境说明.docx"'
# att1.add_header('Content-Disposition', 'attachment', filename='虚拟环境说明.docx')
#
# message.attach(att1)
#
# # 构造附件2，传送当前目录下的 runoob.txt 文件
# att2 = MIMEText(open('test.py', 'rb').read(), 'base64', 'utf-8')
# att2["Content-Type"] = 'application/octet-stream'
# att2["Content-Disposition"] = 'attachment; filename="test.py"'
# message.attach(att2)
#
# try:
#     smtpObj = smtplib.SMTP()
#     smtpObj.connect(mail_host)  # 默认SMTP端口号=25
#     smtpObj.login(mail_user, mail_pwd)
#     smtpObj.sendmail(sender, receivers, message.as_string())
#     print("发送成功！")
#     smtpObj.quit()
# except smtplib.SMTPException:
#     print("Error: 发送失败！")


##在html中添加图片

#
# msgRoot = MIMEMultipart('related')
# msgRoot['From'] = Header("菜鸟教程", 'utf-8')
# msgRoot['To'] = Header("测试", 'utf-8')
# subject = 'Python SMTP 邮件测试'
# msgRoot['Subject'] = Header(subject, 'utf-8')
#
# msgAlternative = MIMEMultipart('alternative')
# msgRoot.attach(msgAlternative)
#
# mail_msg = """
# <p>Python 邮件发送测试...</p>
# <p><a href="http://www.runoob.com">菜鸟教程链接</a></p>
# <p>图片演示：</p>
# <p><img src="cid:image1"></p>
# """
# msgAlternative.attach(MIMEText(mail_msg, 'html', 'utf-8'))
#
# # 指定图片为当前目录
# fp = open('绿色护眼.jfif', 'rb')
# msgImage = MIMEImage(fp.read())
# fp.close()
#
# # 定义图片 ID，在 HTML 文本中引用
# msgImage.add_header('Content-ID', '<image1>')
# msgRoot.attach(msgImage)
#
# try:
#     smtpObj = smtplib.SMTP()
#     smtpObj.connect(mail_host)  # 默认SMTP端口号=25
#     smtpObj.login(mail_user, mail_pwd)
#     smtpObj.sendmail(sender, receivers, msgRoot.as_string())
#     print("发送成功！")
#     smtpObj.quit()
# except smtplib.SMTPException:
#     print("Error: 发送失败！")

class Email():
    """
    Send email for test
    """

    def __init__(self,mail_addr,format="html"):
        self.mail_addr    = mail_addr
        self.format       = format

    def send_mail(self, subject = '',content = '',attachment='', mail_cc=''):
        """

        :param mail_addr:
        :param mail_cc:
        :param subject:
        :param content:
        :param attachment:
        :return:
        """

        mail_host = '192.168.8.253'
        try:
            msg = MIMEText(content, self.format, 'utf-8')
            #注意：formataddr第二个参数为字符串，而不是列表
            msg['From'] = formataddr(["沈浩杰", self.mail_addr])  # 括号里的对应发件人邮箱昵称、发件人邮箱账号
            msg['To'] = formataddr(["接收者", self.mail_addr])  # 括号里的对应收件人邮箱昵称、收件人邮箱账号
            if mail_cc != '':
                msg['CC'] = formataddr(["抄送", mail_cc])  # 括号里的对应收件人邮箱昵称、收件人邮箱账号
            msg['Subject'] = subject  # 邮件的主题，也可以说是标题

            # server = smtplib.SMTP_SSL(mail_host,465)  # 发件人邮箱中的SMTP服务器，端口是25
            server = smtplib.SMTP(mail_host)  # 发件人邮箱中的SMTP服务器，端口是25
            # server.connect(mail_host)
            # server.login(mail_user, mail_pwd)  # 括号中对应的是发件人邮箱账号、邮箱密码
            server.sendmail(self.mail_addr, self.mail_addr, msg.as_string())  # 括号中对应的是发件人邮箱账号、收件人邮箱账号、发送邮件
            server.quit()  # 关闭连接
            print("邮件发送成功")
        except smtplib.SMTPException:  # 如果 try 中的语句没有执行，则会执行下面的 ret=False
            print("邮件发送失败")



if __name__ == '__main__':
    to = 'shen.haojie@xel-tech.com'
    mail_msg = """
    <p>Python 邮件发送测试...</p>
    <p><a href="http://www.runoob.com">这是一个链接</a></p>
    """
    mail = Email(to)
    mail.send_mail(subject="测试",content=mail_msg)