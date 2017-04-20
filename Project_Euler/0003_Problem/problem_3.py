#!/usr/bin/python
# -*- coding: utf8 -*- 
#####
"""
The prime factors of 13195 are 5, 7, 13 and 29.
What is the largest prime factor of the number 600851475143 ?
"""
a=600851475143
i=1
while i<a:
	i+=1
	if a%i==0:
		print a," -> ",i
		a/=i
