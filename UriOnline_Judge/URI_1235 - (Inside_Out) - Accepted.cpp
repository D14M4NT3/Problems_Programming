#include <bits/stdc++.h>

using namespace std; 

string solve(string cad, int x, int y){
	string sal = ""; 
	string dd = cad.substr(0,x);
	string ii = cad.substr(x,cad.size());
	for(int i=dd.size()-1; i>=0; i--){
		sal += dd[i];
	}
	for(int j=ii.size()-1; j>=0; j--){
		sal += ii[j];
	}
	
	return sal; 
}

int main(){
	int cases, d, i, tm;
	string cadena;
	scanf("%i",&cases);
	getchar();
	//cin >> cases;
	tm = cases;
	while(cases-- >0 ){
		getline(cin,cadena);
		//cout << "tam: " << cadena.length() <<endl;
		if(cadena.size()%2==0){
			d = cadena.size()/2; 
			cout << solve(cadena,d,d) << "\n";
		}else{
			d = (cadena.size()/2)+1;
			i = cadena.size()-d; 
			cout << solve(cadena,d,i) << "\n";
		}
	}
	return 0; 
}