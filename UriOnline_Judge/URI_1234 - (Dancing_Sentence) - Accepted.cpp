#include <bits/stdc++.h>

using namespace std; 
string abc ="abcdefghijklmnopqrstuvwxyz";
string ABC ="ABCDEFGHIJKLMNOPQRSTUVWXYZ";
int main(){
	string cadena, sal;
	bool flag;
	while(getline(cin,cadena)){
		sal ="";
		flag = false; 
		for(int i=0; i<cadena.size(); i++){
			if(abc.find(cadena[i])!=-1 || ABC.find(cadena[i])!=-1){
				if(flag){
					sal += tolower(cadena[i]);
					flag = false; 
				}else{
					sal += toupper(cadena[i]);
					flag = true; 
				}
			}else{
				sal += cadena[i];
			}
		}
		cout << sal << "\n"; 
	}
	return 0; 
}	