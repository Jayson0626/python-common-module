#!/usr/bin/python
# coding=utf-8

# 解压缩测试
# import zip_file
# # zip = zip_file.ZipFile()
# # zip.make_zip('.idea', 'test')
# # zip.make_targz('.idea', 'test')
# # zip.make_targz_one_by_one('.idea', 'test1')

from file_operation import get_file_abs_path_tuple_in_dir, get_all_files_abs_path_except_someone_in_dir, get_specify_file_abs_path_in_dir
import os

cur_path = os.getcwd()
f1_exception = get_all_files_abs_path_except_someone_in_dir(cur_path,'test.py')
# f1_all = get_file_abs_path_tuple_in_dir(cur_path)
# print("len:", len(f1_all),len(f1_exception))

sf = get_specify_file_abs_path_in_dir(cur_path,['test.py','vcs.xml'])
print("specify file:", sf)
print("except file:", f1_exception)
print("len:",len(f1_exception))