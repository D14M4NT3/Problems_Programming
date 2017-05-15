#include <bits/stdc++.h>
using namespace std; 

int main(){
	int N, L,C, len; 
	string cadena; 
	int lineas; 
	while(scanf("%i %i %i\n", &N, &L, &C)!=EOF){
		getline(cin,cadena);
		len = cadena.size();
		lineas = 0; 
		int i = C-1; 
		while(i<len-1){
			//cout << "pasos: "<< i << endl; 
			if(cadena[i] == ' '){
				lineas +=1;  
			}else if(i<len-2 && cadena[i+1] == ' '){
				i+=1;
				lineas +=1; 
			}else if(i>0 && cadena[i-1] == ' '){
				i-=1; 
				lineas +=1; 
			}else{
				for(int j=i; j>0; j--){
					if(cadena[j] == ' '){
						i = j; 
						break;
					}
				}
				lineas +=1; 
			}
			i+=C; 
		}
	//	if(len-i-C>=0)
			lineas +=1; 
		//cout << "lineas: " << lineas << endl; 
		if(lineas%L==0){
			printf("%i\n",lineas/L);
		}else{
			printf("%i\n",(lineas/L)+1);
		}
	}
	
	return 0; 
}