#include <bits/stdc++.h>
#define abc "ABCDE"

int main(){
	int cases,k,cont,letra; 
	
	while(scanf("%i",&cases) && cases!=0){
		for(int j=0; j<cases; j++){
			cont = 0; 
			for(int i=0; i<5; i++){
				scanf("%i",&k);
				if(k<=127){
					cont +=1;
					letra = i;  
				}
			}
			if(cont>1 || cont==0){
				printf("*\n");
			}else{
				printf("%c\n",abc[letra]);
			}
		}
	}
	
	return 0; 
}