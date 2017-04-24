#include <bits/stdc++.h>

int main(){
	int n, c;
	double pr, suma = 0.0; 
	scanf("%d %d %lf", &n, &c, &pr);
	suma += c*pr;
	scanf("%d %d %lf", &n, &c, &pr);
	suma += c*pr;
	
	printf("VALOR A PAGAR: R$ %.2lf\n",suma);
	return 0; 
}