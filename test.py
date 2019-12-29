#!/usr/bin/python3
# -*- coding: utf-8 -*-
# @FileName: test.py
# @Time    : 2019/12/29 18:11
# @Author  : Jayson
# @Email   : Jay_Shenhao@163.com

# 解压缩测试
# import zip_file
# # zip = zip_file.ZipFile()
# # zip.make_zip('.idea', 'test')
# # zip.make_targz('.idea', 'test')
# # zip.make_targz_one_by_one('.idea', 'test1')

import os

from file_operation import get_all_files_abs_path_except_someone_in_dir, \
	get_specify_file_abs_path_in_dir, return_and_get_upper_level_dir

cur_path = os.getcwd()
f1_exception = get_all_files_abs_path_except_someone_in_dir(cur_path, ['test.py', 'vcs.xml'])
# f1_all = get_file_abs_path_tuple_in_dir(cur_path)
# print("len:", len(f1_all),len(f1_exception))

sf = get_specify_file_abs_path_in_dir(cur_path, ['test.py', 'vcs.xml'])
print("specify file:", sf)
print("except file:", f1_exception)
print("len:", len(f1_exception))
print(os.getcwd())
upper = return_and_get_upper_level_dir(1)
print(os.getcwd())
