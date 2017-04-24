#include <bits/stdc++.h>

using namespace std; 

int busca(string str, char letra){
	for(int i=0; i<str.size(); i++){
		if(letra==str[i]){
			return i;
		}
	}
}

int main(){
	string abc="ABCDEFGHIJKLMNOPQRSTUVWXYZ";
	int cases;
	scanf("%i",&cases);
	
	while(cases-- >0){
		string cadena;
		string salida="";
		int llave;
		
		cin >> cadena;
		cin >> llave;
		 
		for(int i=0; i<cadena.size(); i++){
			int pos = abs(26+busca(abc,cadena[i])-llave);
			salida = salida+""+abc[pos%26];
		}
		cout << salida << "\n"; 
	}
	
	return 0; 
}