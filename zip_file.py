#!/usr/bin/python
# coding=utf-8
import os, zipfile, tarfile


class ZipFile:
	'Compress files or dirs'

	def __init__(self):
		pass

	def make_zip(self, source_dir, output_filename):
		"""
		Package file as zip format
		:param source_dir: dir that need to be packaged
		:param output_filename: Final name of zip file
		:return: None
		"""
		output_filename = output_filename + '.zip'
		zip_file = zipfile.ZipFile(output_filename, 'w')
		pre_len = len(os.path.dirname(source_dir))
		for parent, dir_names, file_names in os.walk(source_dir):
			for filename in file_names:
				file_path = os.path.join(parent, filename)
				arc_name = file_path[pre_len:].strip(os.path.sep)  # Relative path name
				zip_file.write(file_path, arc_name)
		print('File: "%s" has been packaged with <zip> format successfully!' % source_dir)
		zip_file.close()

	def make_targz(self, source_dir, output_filename):
		"""
		一次性打包整个根目录。空子目录会被打包。
		如果只打包不压缩，将"w:gz"参数改为"w:"或"w"即可
		:param source_dir: dir that need to be packaged
		:param output_filename: Final name of zip file
		:return:None
		"""

		output_filename = output_filename + '.tar.gz'
		with tarfile.open(output_filename, "w:gz") as tar:
			tar.add(source_dir, arcname=os.path.basename(source_dir))
		print('File: "%s" has been packaged with <tar.gz> format successfully!' % source_dir)

	def make_targz_one_by_one(self, source_dir, output_filename):
		"""
		逐个添加文件打包，不打包空子目录，可过滤文件。
		如果只打包不压缩，将"w:gz"参数改为"w:"或"w"即可。
		:param source_dir: dir that need to be packaged
		:param output_filename: Final name of zip file
		:return: None
		"""

		output_filename = output_filename + '.tar.gz'
		tar = tarfile.open(output_filename, "w:gz")
		for root, dir, files in os.walk(source_dir):
			for file in files:
				file_path = os.path.join(root, file)
				tar.add(file_path)
		print('File: "%s" has been packaged with <tar.gz> format successfully!' % source_dir)
		tar.close()

