#!/usr/bin/python3
# # -*- coding: utf-8 -*-
# # @FileName: file_operation.py
# # @Time    : 2019/12/29 18:11
# # @Author  : Jayson
# # @Email   : Jay_Shenhao@163.com

import os
import sys
# import shutil


class FileOperation(object):
    """
    Some functions for file operations.
    """

    def __init__(self):
        pass


def get_all_files_abs_path_except_someone_in_dir(dir_path, exception_file_list):
    """
    Get absolute file path(including subdir's) by tuple in directory, excepting specified file name.
    :param dir_path: specify dir path
    :param exception_file_list: files not need to add file list
    :return: tuple of absolute file path
    """
    # Check para type for: exception_file_list
    if not isinstance(exception_file_list, list):
        raise TypeError("Please input list type parameter!\n")

    file_list = []
    for root, dirs, files in os.walk(dir_path):
        for filename in files:
            # File list including absolute path
            if filename in exception_file_list:  # exception file
                continue
            else:
                file_list.append(os.path.join(root, filename))
    file_tuple = tuple(file_list)
    return file_tuple


def get_specify_file_abs_path_in_dir(dir_path, specify_file_list):
    """
    Get absolute file path(including subdir's) by tuple in directory, via specified file name list.
    :param dir_path: specify dir path
    :param specify_file_list: files need to add file list
    :return: tuple of absolute file path
    """
    # Check para type for: exception_file_list
    if not isinstance(specify_file_list, list):
        raise TypeError("Please input list type parameter!\n")

    file_list = []
    for filename in specify_file_list:
        for root, dirs, files in os.walk(dir_path):
            if filename in files:
                # File list including absolute path
                file_list.append(os.path.join(root, filename))
            else:
                continue
    file_tuple = tuple(file_list)
    return file_tuple


def get_file_abs_path_tuple_in_dir(dir_path):
    """
    Get absolute file path by tuple in directory, including file of subdir
    :param dir_path: specify dir path
    :return: tuple of absolute file path
    """
    file_list = []
    for root, dirs, files in os.walk(dir_path):
        for filename in files:
            # File list including absolute path
            file_list.append(os.path.join(root, filename))
    file_tuple = tuple(file_list)
    return file_tuple


def get_file_name_tuple_in_dir(dir_path):
    """
    Only get file name by tuple in dir，including file of subdir.
    :param dir_path: specify dir path
    :return: tuple of file name
    """
    file_list = []
    for root, dirs, files in os.walk(dir_path):
        for filename in files:
            # File list, just including filename in dir
            file_list.append(filename)
    file_tuple = tuple(file_list)
    return file_tuple


# 定义复制单个文件的函数
def mycopy(file1, file2):
    """
    这个函数实现单个文件的复制
    将file1文件复制到file2文件中
    """
    # 打开文件
    f1 = open(file1, "rb")
    f2 = open(file2, "wb")
    # 读取并复制文件
    content = f1.readline()
    while len(content) > 0:
        f2.write(content)
        content = f1.readline()
    # 关闭文件
    f1.close()
    f2.close()


# 定义复制目录的函数
def copy_dir(dir1, dir2):
    """
    这个函数实现将dir1中的所有文件（包括目录）复制到dir2中
    """
    # 获取源目录中的文件列表
    a = os.listdir(dir1)
    # 创建目标目录
    if not os.path.exists(dir2):
        os.makedirs(dir2)
        print("%s文件夹创建成功!" % dir2)
    else:
        print("目标文件夹已存在，请删除后再复制！")
        sys.exit(1)

    # 遍历源目录并复制
    for i in a:
        # 获取源文件和目标文件目录路径
        file1 = os.path.join(dir1, i)  # 源文件
        file2 = os.path.join(dir2, i)  # 目标文件
        # 判断是文件还是目录，分别进行相应的操作
        if os.path.isfile(file1):
            mycopy(file1, file2)  # 是文件，直接调用文件复制函数
        elif os.path.isdir(file1):
            copy_dir(file1, file2)  # 是目录，递归调用copy_dir()函数即可


def return_and_get_upper_level_dir(level_num):
    """
    Return upper num-level dir,supporting two level
    :param level_num: num of level
    :return: related dir path
    """
    if level_num > 2:
        raise ValueError("Supporting two level now,Please input 1 or 2")

    if level_num == 1:
        # return upper level dir and get that dir name
        os.chdir(os.path.abspath(os.path.join(os.getcwd(), "..")))
        return os.getcwd()
    elif level_num == 2:
        # return upper upper level dir, change '\\' into '/' if in Linux env
        os.chdir(os.path.abspath(os.path.join(os.getcwd(), "..\\..")))
        return os.getcwd()


def get_all_dir_names_in_specify_path(dir_path):
    """
    Get all dir names instead of file names in specified path, and not subdir's.
    :param dir_path: Specify dir path
    :return: dir name tuple
    """
    tmp_list = []
    for file in os.listdir(dir_path):
        file_path = os.path.join(dir_path, file)
        if os.path.isdir(file_path):
            tmp_list.append(file)
    return tuple(tmp_list)


def get_all_dir_abs_path_in_specify_path(dir_path):
    """
    Get all dir path names in specify path, not including subdir path names
    :param dir_path: Specify dir path
    :return: dir path name tuple
    """
    tmp_list = []
    for file in os.listdir(dir_path):
        file_path = os.path.join(dir_path, file)
        if os.path.isdir(file_path):
            tmp_list.append(file_path)
    return tuple(tmp_list)
