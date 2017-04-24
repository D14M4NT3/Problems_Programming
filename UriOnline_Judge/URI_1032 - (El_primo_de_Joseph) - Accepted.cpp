#include <bits/stdc++.h>
#define n 32621
using namespace std; 

int main(){
	vector<int> criba(n,0);
	vector<int> primos;
	
	criba[0] = -1;
	criba[1] = -1; 
	
	for(int i=2; i<n; i++){
		if(criba[i]==0){
			primos.push_back(i);
			for (int j=i; j<n; j+=i){
				if(criba[j]==0){
					criba[j] = i; 
				}
			}
		}
	}
	
	int k; 
	while(scanf("%i",&k) && k!=0){
		vector<int> personas(k);
		for(int i=0; i<k; i++){
			personas[i]=i+1;
		}
		
		int conp=0,pos=0;
		
		while(personas.size()>1){
			pos = (pos+primos[conp]-1)%personas.size();
			personas.erase(personas.begin()+pos);
			conp+=1;
		}
		printf("%i\n",personas[0]);
		personas.clear();
	}
	
	//printf("\nla cantidad de primos hallados es: %i ", primos.size() );

//for(int i=0; i<primos.size();i++){
//		printf("%i\n",primos[i]); /
//	}
	return 0; 
}