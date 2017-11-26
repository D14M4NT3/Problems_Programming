#include <bits/stdc++.h>
using namespace std;
int main(){
	long long int N,M, r1, r2;

	while(scanf("%lld %lld", &N, &M) == 2){
		r1 = r2 = 1;
		while(N>0){
			r1*=N;
			N--;
		}
		while(M>0){
			r2*=M;
			M--;
		}

		printf("%lld\n",r1+r2);
	}

	return 0;
}
