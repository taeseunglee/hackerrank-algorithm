#!/bin/python3

import sys

def fibonacciModified(t1, t2, n):
    ti = t1
    ti_1 = t2
    for i in range (2, n):
        ti_2 = ti + ti_1**2
        ti = ti_1
        ti_1 = ti_2
    return ti_2

if __name__ == "__main__":
    t1, t2, n = input().strip().split(' ')
    t1, t2, n = [int(t1), int(t2), int(n)]
    result = fibonacciModified(t1, t2, n)
    print(result)

