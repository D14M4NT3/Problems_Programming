#include <bits/stdc++.h>

long joseph(long N, long M){
	long iResult=0;
	//printf("joseph: \n");
	for(int i=1; i<=N; i++){
		iResult = (iResult+M -1)%i+1;
		//printf("resultado %i : %i\n", i, iResult);
	}
	return iResult-1; 
}


int main(){
	int maxi=0,k; 
	while (scanf("%i",&k) && k!=0){
		int it=1;
		while(joseph(k-1,it)+2!=13){
			//printf("%i - ",joseph(k-1,it)+2);
			it+=1;
		}
		printf("%i\n",it);
	}
	
	//printf("%i\n",joseph(5,2));
	return 0; 
}