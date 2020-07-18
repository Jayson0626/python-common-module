#!/usr/bin/python3
# -*- coding: utf-8 -*-
# @FileName: format_sdk_comment.py
# @Time    : 2020/7/17 22:48
# @Author  : Jayson
# @Email   : Jayson2050@163.com

import os
import re
import time


def get_file_path_in_dirs(dir_path):
    """
    Get absolute file path by list in directory, including file of subdir
    :param dir_path: specify dir path
    :return: path list of src and head file
    """
    file_list = []
    c_file = []
    h_file = []
    for root, dirs, files in os.walk(dir_path):
        for filename in files:
            # File list including absolute path
            file_list.append(os.path.join(root, filename))
    for j in file_list:
        if re.match(r".*\.c$", j):
            c_file.append(j)
        elif re.match(r".*\.h$", j):
            h_file.append(j)
    return c_file, h_file


def format_sdk_comment(file_list):
    """
    format comment of sdk
    :param file_list:
    :return: None
    """

    has_no_comment_file = []

    for file_name in file_list:  # deal .c and .h file, modify directly
        with open(file_name, "r+") as f:
            all_lines = f.readlines()  # this method can get "\r\n"
            comment_list = []
            num = 0
            mt_copyright_cnt = 0
            mt_file_cnt = 0
            no_comment_flag = False
            for line in all_lines:
                num = all_lines.index(line)
                mt_first_line = re.match(r"(^\/\*+)", line)
                mt_copyright = re.match(r"(^\s\*\s\$Copyright.*)", line)
                mt_file = re.match(r"(^\s\*\sFile:.*)", line)
                mt_purpose = re.match(r"(^\s\*\sPurpose:.*)", line)
                mt_require = re.match(r"(^\s\*\sRequires:.*)", line)
                mt_end_cmt = re.match(r"(^\s\*\/)", line)
                if mt_first_line and num == 0:
                    comment_list.append(line)
                    continue
                elif mt_first_line and num == 1:
                    comment_list.append(line)
                elif num < 1:
                    # print("This file has no comment!")
                    has_no_comment_file.append(file_name)
                    no_comment_flag = True
                    break

                if mt_copyright:
                    comment_list.append(line)
                    mt_copyright_cnt += 1
                    continue

                if mt_file:
                    comment_list.append(line)
                    mt_file_cnt += 1
                    continue

                if mt_purpose:
                    comment_list.append(line)
                    continue
                if mt_require:
                    comment_list.append(line)
                    continue
                if mt_end_cmt:
                    comment_list.append(line)
                    break

            if not no_comment_flag: # if files have comment
                if mt_copyright_cnt == 0:
                    comment_list.insert(1," * $Copyright: (c) 2012 Xel Corpoation.\n")

                if mt_file_cnt == 0:
                    file_name = os.path.basename(file_name)
                    tmp = " * File:  " + file_name + "\n"
                    comment_list.insert(len(comment_list)-1,tmp)
            else: # if files have no comment ,add two!
                comment_list.append("/*\n")
                comment_list.append(" * $Copyright: (c) 2012 Xel Corpoation.\n")
                file_name = os.path.basename(file_name)
                tmp = " * File:  " + file_name + "\n"
                comment_list.append(tmp)
                comment_list.append("*/\n")

            if comment_list:
                # del original comment in file if have, and construct new comment
                del all_lines[0:num+1]
                comment_list.extend(all_lines)
                f.seek(0)
                f.truncate(0)
                f.writelines(comment_list)
                # f.close()
                time.sleep(0.1)
    #return file list which have no comment
    return has_no_comment_file


if __name__ == "__main__":

    cur_path = os.getcwd()
    src_file, inc_file = get_file_path_in_dirs(cur_path)
    all_file = src_file + inc_file
    no_comment_file = format_sdk_comment(all_file)
    with open("no_comment_file.txt",'w+') as f:
        for i in no_comment_file:
            f.write(i+"\n")
