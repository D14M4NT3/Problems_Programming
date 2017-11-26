#include <bits/stdc++.h>

int main(){
	long long unsigned int N,M;
	int t;
	long long int po[] = {10,100,1000,10000,100000,1000000,10000000,100000000,1000000000,10000000000};

	while(scanf("%lld %lld",&N,&M) && N+M!=0){
		t = 0;
		for(long long int i=0; i<=10; i++){
			if((N%po[i]+M%po[i])>=po[i]){
				t += 1;
			}
		}
		if(t==0){
			printf("No carry operation.\n");
		}else if(t==1){
			printf("%i carry operation.\n",t);
		}else{
			printf("%i carry operations.\n",t);
		}
	}

	return 0;
}
