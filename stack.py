#!/usr/bin/python3
# -*- coding: utf-8 -*-
# @FileName: stack.py
# @Time    : 2019/12/29 18:11
# @Author  : Jayson
# @Email   : Jay_Shenhao@163.com

class Stack(object):
    """
    Create stack object
    """
    def __init__(self, size=100):  # __init__为实例方法且内部成员为私有成员，self代表将来要创建的对象的本身
        self._content = []  # 定义实例属性,"_"代表content为私有成员
        self._size = size

    # Clear content of stack
    def clear_stack(self):
        self._content = []

    def is_empty(self):
        if self._content:
            # stack in not empty
            return False
        else:
            return True

    # Judge stack full or not
    def set_size(self, size):  # Set stack buffer size
        self._size = size

    def is_full(self):
        if len(self._content) == self._size:
            return True
        else:
            return False

    # Push stack
    def push(self, v):
        if len(self._content) < self._size:
            self._content.append(v)
        else:
            print("Stack Full!")

    # Pop stack
    def pop(self):
        if self._content:
            return self._content.pop()
        else:
            print("Stack is empty!")

    # Display content of stack
    def show(self):
        print(self._content)

    # Display free space in stack
    def show_free_space(self):
        print("Stack can still PUSH", self._size - len(self._content), "elements.")