#include <bits/stdc++.h>

using namespace std; 

int main(){
	string cadena, buf;
	char letra;
	bool flag;
	//vector<string> cad; 
	
	while(getline(cin,cadena) && cadena!="*"){
		stringstream ss(cadena);
		letra = cadena[0];
		flag = true; 
		while (ss >> buf && flag==true){
			if(toupper(letra) != toupper(buf[0])){ // toupper => convert to UpperCase
				flag = false; 
			}
		}
		
		if(flag){
			printf("Y\n");
		}else{
			printf("N\n");
		}
	}
	
	return 0; 
}