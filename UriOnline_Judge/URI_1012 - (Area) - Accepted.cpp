#include <bits/stdc++.h>
#define pi 3.14159

int main(){
	float A,B,C; 
	scanf("%f %f %f", &A, &B, &C);
	printf("TRIANGULO: %.3f\n",(A*C)/2.0);
	printf("CIRCULO: %.3f\n", C*C*pi);
	printf("TRAPEZIO: %.3f\n", C*((A+B)/2.0));
	printf("QUADRADO: %.3f\n", B*B); 
	printf("RETANGULO: %.3f\n", A*B); 
	return 0; 
}