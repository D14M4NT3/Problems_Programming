#!/usr/bin/python
# -*- coding: utf8 -*- 
#####
"""
In the 20×20 grid below, four numbers along a diagonal line have been marked in red.

The product of these numbers is 26 × 63 × 78 × 14 = 1788696.
What is the greatest product of four adjacent numbers in the same direction (up, down, left, right, or diagonally) in the 20×20 grid?
"""

def archivo():
	archivo=open("matriz_20_x_20.txt","r")
	datos=archivo.readlines()
	matriz=[]
	for x in range(0,20):
		datos[x]=datos[x].replace("\n","")
		datos[x]=datos[x].replace("\r","")
		datos[x]=datos[x].split(" ")
		matriz.append(datos[x])
	return matriz
	
def movimientos(matriz,i,j,k):
	producto=1
	if(k==1): #derecha
		if (19-j)>=3:
			for l in range (0,4):
				producto*=int(matriz[i][j+l])
	elif (k==2): #Izquierda
		if (j>=3):
			for l in range (0,4):
				producto*=int(matriz[i][j-l])
	elif (k==3): #Arriba
		if (i>=3):
			for l in range(0,4):
				producto*=int(matriz[i-l][j])
	elif (k==4): #Abajo
		if (19-i)>=3:
			for l in range(0,4):
				producto*=int(matriz[i+l][j])
	elif (k==5): #diagonal D_Superior
		if (i>=3 and 19-j>=3): 
			for l in range(0,4):
				producto*=int(matriz[i-l][j+l])
	elif (k==6): #diagonal D_Inferior
		if (19-i>=3 and 19-j>=3):
			for l in range(0,4):
				producto*=int(matriz[i+l][j+l])
	elif (k==7): #Diagonal Iz_Superior
		if (i>=3 and j>=3): 
			for l in range(0,4):
				producto*=int(matriz[i-l][j-l])
	else: #Diagonal Iz_Inferior
		if (19-i>=3 and j>=3):
			for l in range(0,4):
				producto*=int(matriz[i+l][j-l])
	return producto

def general():
	matriz=archivo()
	mayor=0
	datos=[1,2,5]
	for x in range(0,20):
		for y in range(0,20):
			for mov in range(1,9):
				resultado=0
				resultado=movimientos(matriz,x,y,mov)
				#print resultado, " -> (",x,",",y,") con movimiento -> ",mov
				if resultado>mayor:
					mayor=resultado
					datos[0]=x
					datos[1]=y
					datos[2]=mov
					
	print "La solucion es -> ", mayor, " Para el producto de los 4 terminos (",datos[0],",",datos[1],") en la direccion -> ",datos[2]
	
a=general()
