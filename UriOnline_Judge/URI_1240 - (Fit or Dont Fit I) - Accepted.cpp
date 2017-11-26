#include <bits/stdc++.h>
using namespace std;

int len(long long int n){
	int d = 0;
	while(n > 0){
		n/=10;
		d++;
	}
	return d;
}

int main(){
	bool flag;
	int cases,cons;
	long long int a,b;
	long long int base[10] = {10,100,1000,10000,100000,1000000,10000000,100000000,1000000000,10000000000};
	scanf("%i",&cases);

	while(cases-- >0){
		scanf("%lld %lld",&a,&b);
		if(len(a)>=len(b)){
			cons = len(b);
		}else{
			printf("nao encaixa\n");
			continue;
		}
		flag = true;

		for(int i = 0; i<10 && i<=cons-1; i++){
			if(a%base[i]!=b%base[i]){
				flag = false;
				printf("nao encaixa\n");
				break;
			}
		}
		if(flag){
			printf("encaixa\n");
		}
	}
	return 0;
}
