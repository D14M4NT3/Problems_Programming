#!/usr/bin/python
# -*- coding: utf8 -*- 
"""
Using names.txt (right click and 'Save Link/Target As...'), a 46K text file containing over five-thousand first names, begin by sorting it into alphabetical order. Then working out the alphabetical value for each name, multiply this value by its alphabetical position in the list to obtain a name score.
For example, when the list is sorted into alphabetical order, COLIN, which is worth 3 + 15 + 12 + 9 + 14 = 53, is the 938th name in the list. So, COLIN would obtain a score of 938 × 53 = 49714.
What is the total of all the name scores in the file?
"""

def datos(dirc):
	archivo=open(dirc, "r")
	b=archivo.read()
	c=b.split(",")
	for x in range (0, len(c)):
		c[x]=c[x].replace('"','').replace('\n','').replace(' ','') #comillas, salto de linea y espacios
	return c
	

def ordenar(lista): 
	ordenada=[]
	temp=""
	#print type(lista)
	for x in range(0, len(lista)):
		for y in range (x, len(lista)):
			if (lista[x]>lista[y]):
				temp=lista[y]
				lista[y]=lista[x]
				lista[x]=temp	
	return lista
	
def procedimiento(lista):
	abc="ABCDEFGHIJKLMNOPQRSTUVWXYZ"
	total=0
	
	for x in range (0, len(lista)):
		letra=lista[x]
		print letra
		suma=0
		for y in range (0, len(letra)):
			#print letra[y]
			suma+=abc.index(letra[y])+1
		total+=suma*(x+1)
	
	return total

b=datos("22.int")
c=ordenar(b)
d=procedimiento(c)
print "la respuesta es -> ", d
