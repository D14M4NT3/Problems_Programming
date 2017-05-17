#include <bits/stdc++.h>
using namespace std; 
int main(){
	int N,t,c,w;
	vector<int> corral;
	bool flag;   
	while(scanf("%i",&N) && N!=0){
		flag = false;
		w = 0; 
		for(int i=0; i<N; i++){
			scanf("%i",&t);
			corral.push_back(t);
			if(t == 1 && !flag){
				w = i; 
				flag = true;
			}
		}
		t = c = 0; 
		for(int i=w; i<N*2+2; i++){
			if(corral[i%N]==1){
				c = 0; 
			}else{
				c +=1; 
				if(c==2){
					corral[i%N] = 1;
					c = 0;
					t+=1; 
				}
			}
		}
		corral.clear();
		printf("%i\n", t); 
	}
	
	return 0; 
}