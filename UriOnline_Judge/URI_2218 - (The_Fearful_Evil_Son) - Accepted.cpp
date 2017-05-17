#include <bits/stdc++.h>

int main(){
	int cases, N; 
	scanf("%i",&cases);
	
	while(cases-- >0){
		scanf("%i",&N);
		printf("%i\n",(N*(N+1))/2 +1);
	}
	
	return 0; 
}