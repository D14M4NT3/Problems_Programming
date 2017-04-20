#!/usr/bin/python
# -*- coding: utf8 -*- 
#####
"""
The following iterative sequence is defined for the set of positive integers:

n → n/2 (n is even)
n → 3n + 1 (n is odd)

Using the rule above and starting with 13, we generate the following sequence:
13 → 40 → 20 → 10 → 5 → 16 → 8 → 4 → 2 → 1

It can be seen that this sequence (starting at 13 and finishing at 1) contains 10 terms. Although it has not been proved yet (Collatz Problem), it is thought that all starting numbers finish at 1.

Which starting number, under one million, produces the longest chain?

NOTE: Once the chain starts the terms are allowed to go above one million.
"""

def casos(N):
	cont=1
	while True:
		if (N%2==0): #par
			N/=2
		else: #Impar
			N=(3*N)+1
		cont+=1
		if (N==1):
			break
	return cont
		
a=input("Ingrese la cota: ")
h=1
mayor=0
num=0
while h<=a:
	llamado=casos(h)
	if (llamado>mayor):
		mayor=llamado
		num=h
	h+=1

print mayor,num
