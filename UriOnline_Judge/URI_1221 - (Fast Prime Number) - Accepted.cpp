#include <bits/stdc++.h>

int main(){
	int cases;
	long long int n;
	bool flag;
	scanf("%i",&cases);

	while(cases-- >0){
		scanf("%lld",&n);
		flag = true;
		for(long long int i=2; i<sqrt(n); i++){
			if(n%i==0){
				flag = false;
				printf("Not Prime\n");
				break;
			}
		}
		if(flag){
			printf("Prime\n");
		}
	}

	return 0;
}
