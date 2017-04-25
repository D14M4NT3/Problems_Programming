/*
	Name: J - Molas Mass
	Copyright: CCPL 2017 - Round 4 
	Author: Christian David Gutierrez
	Date: 24/04/2017
	* URL * https://uva.onlinejudge.org/index.php?option=onlinejudge&page=show_problem&problem=4461
*/

#include <bits/stdc++.h>

using namespace std; 
string ch = "CHON";
string num = "0123456789";
double stw[4] = {12.01, 1.008, 16.00, 14.01};

int main(){
	int cases,t1,t2, nm;
	double resul; 
	string cadena;  
	scanf("%i",&cases);
	
	while(cases-- >0){
		int can[4] = {0,0,0,0};
		resul = 0.0; 
		cin >> cadena;
		for(int i=0; i<cadena.size(); i++){
			for(int j=0; j<4; j++){
				if(cadena[i]==ch[j]){
					nm = 0; 
					if(i!=cadena.size()-1){
						t1 = num.find(cadena[i+1]);
						t2 = num.find(cadena[i+2]);
						if(t1!=-1 && t2!=-1){
							nm = t1*10;
							nm += t2; 
						}else if(t1!=-1){
							nm = t1;
						}else{
							nm = 1; 
						}
					}else{
							nm = 1;  
					}
					can[ch.find(ch[j])] +=nm;
				}
			}
		}
		
		for(int i=0; i<4; i++){
			resul += can[i]*stw[i];
		}
		
		printf("%.3f\n",resul); 
		
	}
	
	
	return 0; 
}
