#include <bits/stdc++.h>

using namespace std; 

int main(){
	int cases, rest=0; 
	string entrada; 
	vector<string> pila; 
	cin >> cases; 
	while (cases-- > 0){
		cin >> entrada; 
		//cout << cases << endl; 
		//cout << entrada; 
		for(int i=0; i<entrada.size(); i++){
			if(entrada[i] == '<'){
				//cout << "un < " << endl;
				pila.push_back("<");
				//cout << "desde pila " << pila[0] <<endl; 
				//cont++; 
			}else if (entrada[i] == '>' && pila.size() > 0 && pila.back() == "<"){
				pila.pop_back(); 
				rest++;			
			}
			//cout << "pila salida " << pila[cont] <<endl;
		}
		printf("%d\n", rest); 
		pila.clear();
		rest = 0; 
		//cont = 0; 
		//cases--;
	}
	return 0; 
}