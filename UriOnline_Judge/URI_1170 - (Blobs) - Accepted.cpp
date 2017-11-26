#include <bits/stdc++.h>

int main(){
	int cases,cont,tm;
	double N;
	scanf("%i",&cases);

	while(cases-- >0){
		scanf("%lf",&N);
		//tm = N/2;
		cont = 0;
		while(N/2>=0.50001){
			N /=2;
			cont +=1;
		}
		printf("%i dias\n",cont);
	}

	return 0;
}
