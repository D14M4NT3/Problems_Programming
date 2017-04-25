/*
	Name: B - Candle Box
	Copyright: CCPL 2017 - Round 4 
	Author: Christian David Gutierrez
	Date: 25/04/2017
	* URL * https://uva.onlinejudge.org/index.php?option=com_onlinejudge&Itemid=8&page=show_problem&problem=5061
*/


#include <bits/stdc++.h>
using namespace std; 

int sm(int N){
	return(N*(N+1)/2);
}

int main(){
	int D, R, T, todo, st,cases;
	bool flag;
	//scanf("%i", &cases);
	while(cin>>D){
		scanf("%i %i",&R,&T);
		flag = true; 
		todo = R+T; 
		for(int i=4; i<50; i++){
			if(flag){
				for(int j=3; j<50; j++){
					if(sm(i)+sm(j)-9==todo && D==abs(i-j)){
						flag = false; 
						st = min(i,j); 
						break; 
					}
				}
			}else{
				break;
			}
		}
		printf("%i\n",sm(st)-3-T); 
	}
	
}
