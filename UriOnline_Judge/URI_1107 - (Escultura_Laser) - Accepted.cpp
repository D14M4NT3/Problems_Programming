#include <bits/stdc++.h>

int main(){
	int n,m; 
	while(scanf("%i %i", &n, &m) && n+m!=0){
		int h0,h1, total = 0;
		scanf("%i",&h0);
		total += n- h0;
		
		for(int i=0; i<m-1; i++){
			scanf("%i",&h1);
			if(h1<h0){
				total += h0 - h1; 
			}
			h0 = h1; 
		}
		printf("%i\n",total);
	}
	
	return 0; 
}