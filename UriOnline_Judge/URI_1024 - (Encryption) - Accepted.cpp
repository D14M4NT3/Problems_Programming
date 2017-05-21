#include <bits/stdc++.h>

using namespace std;

int main(){
	string abc ="abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ";
	string sal, cadena;
	int cases,m,t;
	scanf("%i\n",&cases);
	
	while(cases-- >0){
		getline(cin,cadena);
		sal = "";
		m = cadena.size()/2;
		t = cadena.size()-1;
		if(cadena.size()%2==0){
			m -=1;
		}
		
		for(int i=t; i>=0; i--){
			if(abc.find(cadena[i])!=-1){
				sal +=char(cadena[i]+3);
			}else{
				sal += cadena[i];
			}
			
			if(i<=m){
				sal[t-i] = char(sal[t-i]-1);
			}
		}
		cout << sal << "\n"; 
	}
}