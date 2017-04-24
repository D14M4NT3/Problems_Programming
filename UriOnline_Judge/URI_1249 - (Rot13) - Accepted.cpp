#include <bits/stdc++.h>

#define llave 13
#define abc "abcdefghijklmnopqrstuvwxyz"
#define ABC "ABCDEFGHIJKLMNOPQRSTUVWXYZ"

using namespace std; 

int busca(string str, char letra){
	for(int i=0; i<str.size(); i++){
		if(letra==str[i]){
			return i;
		}
	}
	return -1; 
}

int main(){
	string cadena;
	
	while(getline(cin,cadena)){
		string salida="";
		 
		for(int i=0; i<cadena.size(); i++){
			int b = busca(abc,cadena[i]);
			if(b==-1){
				b = busca(ABC,cadena[i]);
				if(b==-1){
					salida = salida+""+cadena[i];
				}else{
					salida = salida+""+ABC[(b+llave)%26];
				}
			}else{
				salida = salida+""+abc[(b+llave)%26];
			}
		}
		cout << salida << "\n"; 
	}
	
	return 0; 
}