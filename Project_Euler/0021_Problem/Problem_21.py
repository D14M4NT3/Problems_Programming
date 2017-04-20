import time
to=time.time()
def divisores(n): #Suma de los divisores de N 
	A=0
	for x in range (1,n):
		if (n%x==0):
			A+=x
	return A

amigos=[] #Lista de primos amigos
resultado=0
for A in range(2,10000):
	B=divisores(A) #hallamos la suma de todos los numeros (2,10000)
	if (B<10000): #condicion de que la suma debe ser menor a 10000
		D=divisores(B) #hallamos la suma de la suma de divisores :v 
		if (A==D and A!=B): 
			if (amigos.count(A)==0 and amigos.count(B)==0): #Ingresamos los numeros amigos, buscando que no este antes
				amigos.append(A)
				amigos.append(B)
				print A,B
				resultado+=A+B	#sumamos todos los numeros amigos que encontremos

print resultado
tf=time.time() #queria optimizar pero me dio mamera :v 
print "tiempo de ejecucion: ", tf-to
