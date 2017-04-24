#include <bits/stdc++.h>

using namespace std;
int calls = 0; 

int fibonacci(int N){
	calls += 1; 
	if(N==0){
		return 0; 
	}else if(N == 1){
		return 1; 
	}else{
		return (fibonacci(N-1) + fibonacci(N-2));
	}
}

int main(){
	int cases;
	scanf("%i",&cases);
	while(cases-- >0){
		int num; 
		scanf("%i", &num);
		printf("fib(%i) = %i calls = %i\n",num,calls-1,fibonacci(num));
		calls = 0; 
	}
	
	return 0;
}