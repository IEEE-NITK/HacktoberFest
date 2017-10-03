#!usr/bin/env python
#-*- coding: utf-8 -*-

def search(n, arr):
    index = None
    for element in arr:
        if element == n:
            index = arr.index(element)
    return index

def recursive(n, arr):
    if not arr:
        return
    if arr[0] == n:
        return n
    else:
        arr.pop(0)
        return recursive(n, arr)
