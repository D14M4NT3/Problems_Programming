#include <bits/stdc++.h>
#define n 12

int main(){
	char evento; 
	float temp;  
	scanf("%s", &evento); 
	float matriz[n][n];
	
	for (int i=0; i<n; i++){
		for (int j=0; j<n; j++){
			//scanf("%f", &temp);
			//matriz[i][j] = temp;
			//printf("%d - %d", i, j); 
			//matriz[i][j] = float(i+j);  
			scanf("%f", &matriz[i][j]);
		}
	}
	
	int x = 1, y = 0, casillas = n;
	float suma = 0, media = 0;  
	casillas -=2; 
	while (casillas >=0 && y<(n/2)+1){
		for(int i=x; i<=casillas; i++){
			//printf("%.2f\t", matriz[i][y]); 
			suma += matriz[i][y];
			media += 1; 
		}
		//printf(" - "); 
		x++; 
		y++; 
		casillas -= 1; 
	}
	
	if (evento=='S'){
		printf("%.1f\n",suma);
	}else{
		printf("%.1f\n",suma/media);
	}
	//printf("%f\n", suma);
	//printf("%f\n", media);
	//printf("%.1f\n", suma/media);   
	
	return 0; 
}
