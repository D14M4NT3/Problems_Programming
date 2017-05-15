#include <bits/stdc++.h>

using namespace std; 

int main(){
	string N, sal; 
	char D; 
	bool flag; 
	while((cin >> D >> N) && (D!='0' || N!="0")){
		sal = "";
		flag = true;  
		for(int i=0; i<N.size(); i++){
			if(D!=N[i]){
				sal += N[i];
			}
		}
		int p = -1; 
		for(int j=0; j<sal.size(); j++){
			if(sal[j]!='0'){
				p = j; 
				break; 
			}
		}
		if(p==-1){
			//sal +="0";
			cout << "0\n"; 
		}else{
			cout << sal.substr(p,sal.size()-p+1) << "\n";
		}
	}
	
	return 0; 
}