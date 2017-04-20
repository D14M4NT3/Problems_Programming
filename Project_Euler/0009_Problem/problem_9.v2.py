#!/usr/bin/python
# -*- coding: utf8 -*- 
#####
"""
A Pythagorean triplet is a set of three natural numbers, a < b < c, for which,
a^2 + b^2 = c^2

For example, 3^2 + 4^2 = 9 + 16 = 25 = 5^2.

There exists exactly one Pythagorean triplet for which a + b + c = 1000.
Find the product abc.
"""

import math

def algo():
	for a in range (1,1000):
		for b in range (a,1000):
			ab=(a**2)+(b**2)
			c=math.sqrt(ab)
			if (a<b<c and c<=1000):
				if(a+b+c==1000):
					print "SOLUCION -> ",a,b,c
					return a,b,c

a=algo()
print a

#31875000
