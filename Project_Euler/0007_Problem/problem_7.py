#!/usr/bin/python
# -*- coding: utf8 -*- 
#####
"""
By listing the first six prime numbers: 2, 3, 5, 7, 11, and 13, we can see that the 6th prime is 13.

What is the 10 001st prime number?
"""

def primo(n):
	for x in range (2,n):
		if n%x==0:
			return False
		else:
			p=1
	if p==1:
		return True


cont=0
h=2
while cont!=10001:
	if primo(h)==True:
		cont+=1
		print h, cont
	h+=1

print h
