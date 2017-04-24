#include <bits/stdc++.h>

int main(){
	int cases, x, y;
	int tpx, tpy;  
	while(scanf("%d",&cases) && cases>0){
		scanf("%d %d", &x, &y); //PUNTO DE DIVISION
		for(int i=0; i<cases; i++){
			scanf("%d %d", &tpx, &tpy);	//punto del mapa
			tpx-=x; 
			tpy-=y;
			//printf("nuevo puntos: (%d , %d)",tpx,tpy);
			if(tpx==0 || tpy==0){
				printf("divisa\n");
			}else if(tpx>0){
				if(tpy>0){
					printf("NE\n");
				}else{
					printf("SE\n");
				}
			}else{
				if(tpy>0){
					printf("NO\n");
				}else{
					printf("SO\n");
				}
			}
		}
	}
	return 0; 
}