#include <bits/stdc++.h>

int main(){
	int x,y;
	float pro[5]; 
	scanf("%i %i", &x, &y); 
	pro[0] = 4.00;
	pro[1] = 4.50;
	pro[2] = 5.00;
	pro[3] = 2.00; 
	pro[4] = 1.50;
	printf("Total: R$ %.2f\n",y*pro[x-1]);
	
	return 0; 
}