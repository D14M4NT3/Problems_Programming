#!/usr/bin/python
# -*- coding: utf8 -*- 
#####

def divisores(N):
	div=[]
	i=1
	while True:
		if (N%i==0):
			div.append(i)
			N/=i
			i=1
		if (N==1):
			return div
		i+=1

def tratamiento(A):
	cont=0
	producto=1
	new=[]
	for x in range(1, len(A)): 
		if (A[x] in new)==False:
			new.append(A[x])
	
	for y in new:
		cont=A.count(y)		
		producto*=cont+1

	return producto


h=1
while True:
	list_div=divisores((h*(h+1))/2)
	div=tratamiento(list_div)
	#print h, div, (h*(h+1))/2
	if (div>500):
		print "puesto -> ",h," el valor sumado de -> ",(h*(h+1))/2," y con ",div," divisores" #, numeros
		break
	else:
		h+=1

