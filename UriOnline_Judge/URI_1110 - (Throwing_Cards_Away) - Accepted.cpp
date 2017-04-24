#include <bits/stdc++.h>
#include <sstream>
using namespace std; 

int main(){
	int cases;
	vector<int> cola;
	//vector<int> descar;
	 
	while (cin >> cases && cases!=0){
		string salida="Discarded cards:"; 
		//int temp=0;
		//printf("Discarded cards: ");
		for(int i=cases; i>0; i--){
			cola.push_back(i);
		}
		while(cola.size()>1){
			ostringstream temp;
			temp << cola.back();
			if(cola.size()!=2){
				salida += " "+temp.str()+",";
			}else{
				salida += " "+temp.str();
			}
			//cout << salida << endl; 
			cola.pop_back();
			cola.insert(cola.begin(),cola.back());
			cola.pop_back();
		}
		cout << salida << endl; 
		cout << "Remaining card: " << cola[0] << endl;
		cola.clear();
	}
	
	
	
	return 0; 
}