#include <bits/stdc++.h>

using namespace std; 

int main(){
	string cadena, sal;
	bool f1, f2; 
	while(getline(cin,cadena)){
		sal = "";
		f1 = f2 = true; //italicized - // boldface
		for(int i=0; i<cadena.size(); i++){
			if(cadena[i]=='_'){
				if(f1){
					sal += "<i>";
				}else{
					sal +="</i>";
				}
				f1 = !f1; 
			}else if(cadena[i]=='*'){
				if(f2){
					sal+= "<b>";
				}else{
					sal+= "</b>";
				}
				f2 = !f2;  
			}else{
				sal += cadena[i];
			}
		}
		cout << sal << "\n"; 
	}
	return 0; 
}