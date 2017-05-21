#include <bits/stdc++.h>

using namespace std; 

int main(){
	string tag,rep,cadena, sal, tmp;
	vector<int> t1,t2;
	bool flag; 
	int p1,d,cont,b; 
	while(cin >> tag){
		cin >> rep;
		getchar();
		getline(cin,cadena);
		sal = cadena; 
		flag = true; 
		transform(tag.begin(), tag.end(), tag.begin(), ::toupper);
		
		for(int i=0; i<cadena.size(); i++){
			if(cadena[i]=='<'){
				if(flag){
					flag = false; 
					p1 = i; 
				}else{
					p1 = i; 
				}
			}else if(cadena[i]=='>' && !flag){
				flag = true; 
				t1.push_back(p1);
				t2.push_back(i);
			}
		}
		d = tag.size()-rep.size();
		cont = 0; 
		for(int i=0; i<t1.size(); i++){ 
			 tmp = cadena.substr(t1[i],t2[i]-t1[i]); 
			 transform(tmp.begin(), tmp.end(), tmp.begin(), ::toupper);
			 
			 b = tmp.find(tag);
			 while(b!=-1){
				sal.replace(t1[i]+b-d*cont,tag.size(),rep);
			 	b = tmp.find(tag,b+1);
			 	cont +=1; 
			 }
		}
		 
		cout << sal << "\n";
		t1.clear(); 
		t2.clear();
	}
	return 0; 
}
