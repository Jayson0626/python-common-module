#!/usr/bin/python
# coding=utf-8

import zip_file
zip = zip_file.ZipFile()
zip.make_zip('.idea', 'test')
zip.make_targz('.idea', 'test')
zip.make_targz_one_by_one('.idea', 'test1')