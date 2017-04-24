#include <bits/stdc++.h>
#define ABC "ABCDEFGHIJKLMNOPQRSTUVWXYZ"
using namespace std; 

int busca(char letra){
	for(int i = 0; i<26; i++){
		if(ABC[i] == letra){
			return i;
		}
	}
}

int cipher(int pABC, int element, int pelement){
	return (pABC + element + pelement);
}

int main(){
	int cases; 
	scanf("%i",&cases);
	
	while(cases-- >0){
		int N, total = 0;
		scanf("%i",&N); 
		
		string cadena;
		for(int i=0; i<N; i++){
			cin >> cadena;
			for(int j=0; j<cadena.size(); j++){
				total += cipher(busca(cadena[j]), i, j); 
				//cout << total <<  " " << cadena[j]<<" - " << busca(cadena[j]) << "  -  "  << i << " - " << j << endl; 
			}
		}
		printf("%i\n",total);
	}
	
	return 0; 
}