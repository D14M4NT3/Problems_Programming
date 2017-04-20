#!/usr/bin/python
# -*- coding: utf8 -*- 
#####
#If we list all the natural numbers below 10 that are multiples of 3 or 5, we get 3, 5, 6 and 9. The sum of these multiples is 23.
#Find the sum of all the multiples of 3 or 5 below 1000.
#####

a=3
b=5
suma=0
for x in range (0,1000):
	if (x%a)==0 or (x%b)==0:
		suma+=x

print suma

#267333
