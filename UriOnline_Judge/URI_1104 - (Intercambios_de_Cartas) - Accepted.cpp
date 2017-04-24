#include <bits/stdc++.h>

using namespace std;

bool esta(int x, set<int> bb){
	for(set<int>::iterator h = bb.begin(); h!=bb.end(); h++){
		if(*h==x){
			return false;
		}
	}
	return true; 
}

int main(){
	int A,B; 
	set<int> Al,Bt; 
	
	while(scanf("%i %i",&A,&B) && A+B!=0){
		int temp; 
		for(int i=0; i<A; i++){
			scanf("%i",&temp);
			Al.insert(temp);
		}
		for(int j=0; j<B; j++){
			scanf("%i",&temp);
			Bt.insert(temp);
		}
		
		int ca = 0, cb = 0;
		for(set<int>::iterator s = Al.begin(); s!=Al.end(); s++){
			if(!Bt.count(*s)){
				///cout << "esta el 1: " << *s << " . "; 
				ca+=1;
			}
		}
		for(set<int>::iterator w = Bt.begin(); w!=Bt.end(); w++){
			if(!Al.count(*w)){
				//cout << "\nesta el 2: " << *w << " . "; 
				cb+=1;
			}
		}
		printf("%i\n",min(ca,cb));
		//cout << "salida es: " << min(ca,cb) <<endl; 
		Al.clear();
		Bt.clear();
	}	
	return 0; 
}