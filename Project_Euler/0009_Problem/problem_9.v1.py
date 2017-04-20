#!/usr/bin/python
# -*- coding: utf8 -*- 
#####

def algo():
	for a in range (1,1000):
		for b in range (a,1000):
			for c in range (b,1000):
				if ((a**2)+(b**2))==c**2:
					if (a+b+c)==1000:
						print "--"
						print "pitagorica -> ",a**2,b**2,c**2
						print "Solución -> ",a,b,c
						print "--"
						return a,b,c
						#print "pitagorica -> ",x,y,h

a=algo()
print a
