#!/usr/bin/python
# -*- coding: utf8 -*- 
#####
import math
def primos(n):
	primo=0
	for x in range (2, int(math.sqrt(n))+1):
		if (n%x)==0:
			primo=0
			break
		else:
			primo=1
	if (primo==1):
		return True

c=0
suma=0
for j in range(1,2000000):
	b=primos(j)
	if b==True:
		suma+=j
		#print j,
		c+=1
		
print "solucion -> ",c+2, suma+5
