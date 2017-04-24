#include <bits/stdc++.h>

using namespace std; 

int main(){
	int B,N; 
	
	while(scanf("%i %i", &B, &N) && B+N!=0){
		vector<int> reserva(B);
		vector<int> deuda(B,0); 
		int k, flag=0; 
		
		for(int i=0; i<B; i++){
			scanf("%i",&k);
			reserva[i] = k; 
		}
		
		int x,y,z;  
		for(int j=0; j<N; j++){
			scanf("%i %i %i", &x, &y, &z); 
			deuda[x-1] += z; 
			reserva[y-1] += z; 
			//cout << "la wea" << endl;
		}
		
		for(int i=0; i<B; i++){
			if(reserva[i]-deuda[i]<0){
				printf("N\n");
				flag = 1;  
				break; 
			}
		}
		
		if(flag==0){
			printf("S\n");
		}
		deuda.clear();
		reserva.clear();
	}
	return 0; 
}