#include <bits/stdc++.h>

using namespace std; 

int main(){
	int cases, n, k,h; 
	scanf("%d",&cases);
	h=cases;
	while(cases-- > 0){
		scanf("%d %d",&n,&k);
		vector<int> vec(n);
		for(int i=0; i<n; i++){
			vec[i] = i+1;
		}
		int pactual=0, i=0, res=0;
		while(vec.size()>1){
			pactual++; 
			if(pactual==k){
				vec.erase(vec.begin()+i);
				pactual = 0;
			}else{
				i++;
				i=i%vec.size();
			}
		}
		res = vec[0];
		cout << "Case " << h-cases << ": " << res << endl;
	}
	
	return 0; 
}