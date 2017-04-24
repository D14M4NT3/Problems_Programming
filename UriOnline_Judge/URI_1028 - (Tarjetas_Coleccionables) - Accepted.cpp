#include <bits/stdc++.h>

int mcd(int a, int b){
	if(b==0){
		return a; 
	}else{
		return mcd(b,a%b);
	}
}

int main(){
	int cases, A,B; 
	scanf("%i",&cases);
	while(cases-- >0){
		scanf("%i %i", &A, &B);
		printf("%i\n",mcd(A,B));
	}
	return 0; 
}