#include <bits/stdc++.h>

using namespace std; 

int main(){
	int cases;
	string st1, st2, sal;  
	scanf("%i",&cases);
	while(cases-- >0){
		sal = ""; 
		cin >> st1 >> st2; 
		for(int i=0; i<min(st1.size(),st2.size()); i++){
			sal += st1[i];
			sal += st2[i];
		}
		if(st1.size()>st2.size()){
			sal += st1.substr(st2.size());
		}else{
			sal += st2.substr(st1.size());
		}
		
		cout << sal << "\n"; 
	}
	return 0; 
}