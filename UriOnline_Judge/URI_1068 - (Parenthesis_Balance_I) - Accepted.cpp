#include <bits/stdc++.h>

using namespace std; 

int main(){
	string entrada; 
	vector<string> pila; 
	
	while(cin >> entrada){
		for(int i=0; i<entrada.size(); i++){
			if(entrada[i] == '('){
				pila.push_back("(");
			}else if(entrada[i] == ')'){
				//cout << "entro )" << endl;
				//cout << "pila: " << pila.back(); 
				if(pila.size()>0 && pila.back() == "("){ 
					pila.pop_back();
				}else{
					pila.push_back(")");
				}
			}
		}
		//cout << "tam : " << pila.size() << endl; 
		//cout << pila[0];
		if(pila.size()==0){
			printf("correct\n");
		}else{
			printf("incorrect\n");
		}
		pila.clear();
	}
	
	
	return 0; 
}