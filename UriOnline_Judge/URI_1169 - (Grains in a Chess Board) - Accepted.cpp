#include <bits/stdc++.h>
#define kg 12000

int main(){
	long long unsigned int resul,granos,tg, tk;
	int cases,N;
	scanf("%i",&cases);
	while(cases-- >0){
		scanf("%d",&N);
		resul = 1;
		granos = 1;
		for(int i=0; i<N-1; i++){
			resul *=2;
			granos += resul;
		}
		tg = granos/12;
		tk = tg/1000;
		printf("%lld kg\n",tk);
	}
	return 0;
}
