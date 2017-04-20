#!/usr/bin/python
# -*- coding: utf8 -*- 
#####
#A palindromic number reads the same both ways. The largest palindrome made from the product of two 2-digit numbers is 9009 = 91 × 99.
#Find the largest palindrome made from the product of two 3-digit numbers.
#####

a=100
b=100
mayor=0
for x in range(a,1000):
	for y in range(x,1000):	#minimizar recorrido, ahorrro y agilidad de tiempo
		num=x*y
		palin=str(num)[::-1]
		if (str(num)==palin):
			if num>mayor:
				mayor=num

print mayor
