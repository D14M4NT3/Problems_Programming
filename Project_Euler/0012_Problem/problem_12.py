#!/usr/bin/python
# -*- coding: utf8 -*- 
#####

def divisores(n):
	cont=2	#cuento el 1 y el mismo n
	for x in range(2,int(n/2)+1):
		if (n%x)==0:
			cont+=1
	return cont

h=1
div=0
while True:
	div=divisores((h*(h+1))/2)
	#print h, div, (h*(h+1))/2
	if (div>12):
		print "puesto -> ",h," el valor sumado de -> ",(h*(h+1))/2," y con ",div," divisores" #, numeros
		break
	else:
		h+=1

#print h, div, (h*(h+1))/2,numeros
