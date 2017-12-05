#include <bits/stdc++.h>
using namespace std;

double distancia(int A, int B){
	return abs(A-B);
}

int main(){
	int cases; 
	int polea, ants, temp;
	int amin, amax,amitad;
	double mitad, dm; 
	scanf("%i",&cases);
	
	while(cases-- ){
		scanf("%i %i",&polea,&ants);
		mitad = polea/2.0;
		scanf("%i",&temp);
		dm = abs(mitad-temp);
		amitad = temp; 
		amin = amax = temp; 
		
		for(int i=0; i<ants-1; i++){
			scanf("%i",&temp);
			amin = min(amin,temp);
			amax = max(amax,temp);
			if(abs(mitad-temp)<dm){
				amitad = temp; 
				dm = abs(mitad-temp);
			} 
		}
		int a1 = min(polea-amitad,amitad);
		int a2 = max(polea-amin,amax);
		printf("%i %i\n",a1,a2);
	}
	
	return 0; 
}
