#!/usr/bin/python
# -*- coding: utf8 -*- 
#####
#2520 is the smallest number that can be divided by each of the numbers from 1 to 10 without any remainder.
#What is the smallest positive number that is evenly divisible by all of the numbers from 1 to 20?
#####


h=20 #Minimo debe ser 20
lista=[3,4,6,7,8,9,11,12,13,14,15,16,17,18,19] #Era par al ser divisible por 2, y al serlo por 20, lo es por 5 y por 10 y pues el 1 no es necesario. (acortar tiempo y procesos)
flag=False
while flag==False:
	h+=20
	for x in lista:
		if (h%x)==0:
			flag=True
		else:
			flag=False
			break
			
print h
