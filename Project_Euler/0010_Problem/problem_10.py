#!/usr/bin/python
# -*- coding: utf8 -*- 
#####
"""
The sum of the primes below 10 is 2 + 3 + 5 + 7 = 17.
Find the sum of all the primes below two million.
"""

import math
p_10=[2,3]
primo=0
suma=0
for x in range (4,2000000):
	for y in p_10:
		if y<=int(math.sqrt(x))+1:
			if (x%y)!=0:
				primo=1
			else: 
				primo=0
				break
		else:
			break
	if (primo==1):
		suma+=x
		p_10.append(x)


#print p_10
print "Solucion -> ",len(p_10), suma+5 #mas 5 que son los dos primeros primos (2,5) que ya estan en la cripta
