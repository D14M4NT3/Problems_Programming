/*
	Name: D - Godel's Dream
	Copyright: CCPL 2017 - Round 4 
	Author: Christian David Gutierrez
	Date: 25/04/2017
	* URL * https://uva.onlinejudge.org/index.php?option=com_onlinejudge&Itemid=8&page=show_problem&problem=4386
*/

#include <bits/stdc++.h>

using namespace std; 

int main(){
	string cadena; 
	int cont,w,h,q;
	
	while(cin>>cadena){
		for(int i=0; i<cadena.size(); i++){
			if(cadena[i]=='?'){
				cadena[i] = '0';
			}
		}
		w = h = cont = 0; 
		while(w<cadena.size()){
			if(cadena[-1]!='1' && cadena[-2]!='1'){
				if(cadena[w]=='0'){
					cont +=1;
					w+=1; 
				}else{
					h = 2; // ceros que necesito 
					q = w+1;  
					while(h!=0 && q<cadena.size()){
						if(cadena[q]=='0'){
							h-=1; 
						}else{
							h+=1; 
						}
						q+=1; 
					}
					if(h==0){
						cont+=1;
						w = q; 
					}else{
						cont =0;
						w = cadena.size()+1; 
					}
				}
			}else{
				cont = 0; 
				break; 
			}
			//cout << "contador: " << cont << endl; 
		}
		printf("%i\n",cont); 
	}
}
