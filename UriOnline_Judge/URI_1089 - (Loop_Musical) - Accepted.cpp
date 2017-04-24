#include <bits/stdc++.h>

int main(){
	int N,pi,p1,p2; 
	int cont;
	bool flag,f1; 
	
	while(scanf("%i",&N) && N!=0){
		scanf("%i %i",&pi,&p2);
		p1 = pi;
		cont = 0;
		if(p1>p2){
			flag = true;
			f1 = true;
		}else{
			flag = false;
			f1 = false;
		}
		
		for(int i=2; i<N; i++){
			scanf("%i",&p1);
			if(flag){
				if(p2<p1){
					cont += 1;
					flag = false;
				}
			}else{
				if(p2>p1){
					cont += 1; 
					flag = true; 
				}
			}
			p2 = p1; 
		}
		
		if(pi>p2){
			if(f1){
				cont+=1; 
			}
			if(flag){
				cont+=1; 
			}
		}else if(pi<p2){
			if(!f1){
				cont+=1;
			}
			if(!flag){
				cont+=1;
			}
		}
		
		printf("%i\n",cont);
	}
	return 0; 
}