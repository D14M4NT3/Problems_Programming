#!/usr/bin/python
# -*- coding: utf8 -*- 
#####
"""
2^15 = 32768 and the sum of its digits is 3 + 2 + 7 + 6 + 8 = 26.

What is the sum of the digits of the number 2^1000?
"""

a=input("Ingrese la base")
cadena=str(a**1000)
suma=0
for x in cadena:
	suma+=int(x)
	
print suma
