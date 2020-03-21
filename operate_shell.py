#!/usr/bin/python3
# -*- coding: utf-8 -*-
# @FileName: operate_shell.py
# @Time    : 2020/2/8 15:58
# @Author  : Jayson
# @Email   : Jayson2050@163.com


import os
import subprocess


class Shell(object):
    """
    To operate Linux or shell command,that can run and get result from echo info.
    """

    def __init__(self):
        self.null = ""
        self.bash = "bash "
        self.source = "source "
        self.echo = "echo "

    def run_cmd_only(self, cmd):
        """
        Just run shell cmd and get status of run.
        :param cmd: shell cmd need to run
        :return: status of run
        """
        # Check para type for: cmd
        if not isinstance(cmd, str):
            raise TypeError("Please input String type parameter!\n")

        cmd1 = self.null + cmd
        st = os.system(cmd1)
        if st == 0:
            print("Successfully output cmd：{0}".format(cmd))
        else:
            print("Failed output cmd:{0}".format(cmd))

    def get_run_cmd_result(self, cmd):
        """
        Echo shell cmd and get result of output if it has.
        :param cmd: shell cmd need to run.
        :return: result of output by list format.
        """
        # Check para type for: cmd
        if not isinstance(cmd, str):
            raise TypeError("Please input String type parameter!\n")

        cmd1 = self.null + cmd
        res_list = []
        # Return type of Class object
        p = subprocess.Popen(cmd1, shell=True, stdout=subprocess.PIPE, stderr=subprocess.STDOUT)

        for line in p.stdout.readlines():
            line = line[:-1].decode("utf-8")
            res_list.append(line)
        # retval = p.wait()
        return res_list

    def get_one_shell_env_var(self, var_name):
        """
        Get one shell environment var via specify environment var
        :param var_name: shell env var
        :return: value of env var
        """
        # Check para type for: var_name
        if not isinstance(var_name, str):
            raise TypeError("Please input String type parameter!\n")

        cmd = self.echo + "$" +"{" + var_name + "}"
        value = Shell().get_run_cmd_result(cmd)
        return value

    def run_shell_script(self, script_path):
        """
        Run shell script by it's path
        :param script_path: file path
        :return: None
        """
        # Check para type for: script_path
        if not isinstance(script_path, str):
            raise TypeError("Please input String type parameter!\n")

        cmd = self.bash + script_path
        Shell().run_cmd_only(cmd)

    def get_shell_env_var_dict(self, env_var_list):
        """
        Get some infos of shell environment var by dictionary.
        :param env_var_list: list of env var
        :return: dict info of env var
        """
        # Check para type for: env_var_list
        if not isinstance(env_var_list, list):
            raise TypeError("Please input List type parameter!\n")

        dict1 = {}
        tmp = self.null # To adjust rule of Class, and have no sense.
        for var in env_var_list:
            value = Shell().get_one_shell_env_var(var)
            dict1.update({var:value})
        return dict1

    def get_env_setup_var(self, env_setup_path, toolchain, config_file_path):
        """
        Only used for env_setup file to get inside env var, which in ISE project.
        :param env_setup_path: env_setup file path
        :param toolchain: key word for toolchain in env_setup file
        :param config_file_path: config file path
        :return:env var dict
        """
        # Check para type for:
        if not isinstance(env_setup_path, str):
            raise TypeError("Please input String type parameter!\n")
        if not isinstance(toolchain, str):
            raise TypeError("Please input String type parameter!\n")
        if not isinstance(config_file_path, str):
            raise TypeError("Please input String type parameter!\n")

        cmd = self.source + env_setup_path + " " + toolchain + " " + config_file_path

        # Source env_setup file and generate env var
        Shell().run_cmd_only(cmd)
        # Get related env var in var_list.
        common_env_var = ["XEL_BUILD_KERNEL", ""]
        dict1 = Shell().get_shell_env_var_dict(common_env_var)
        return dict1


# 测试python调用shell命令并获取返回内容
# print("os.environ:",os.environ["HOME"])

# a=os.system("ls -l")
# tmp=os.popen("echo $A").readlines() # 返回列表类型
# for line in tmp:
# 	print("$A=",line)
