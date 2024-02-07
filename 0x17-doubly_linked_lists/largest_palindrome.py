#!/usr/bin/python3

largest = 0
x, y = 0, 0
for i in range(1000):
    for j in range (1000):
        result = i * j
        str_result = str(result)
        rev_result = str_result[::-1]

        if (str_result == rev_result):
            largest = result
            x, y = i, j


print("the largest palindrome is {:d} and is gottten from {} x {}".format(largest, x, y))

