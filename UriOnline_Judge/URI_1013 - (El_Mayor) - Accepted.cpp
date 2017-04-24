#include <bits/stdc++.h>

int mayor(int n1, int n2){
	return (n1+n2+(abs(n1-n2)))/2;
}

int main(){
	int a,b,c; 
	scanf("%i %i %i",&a,&b,&c); 
	printf("%i eh o maior\n",mayor(a,mayor(b,c)));
	
	return 0; 
}