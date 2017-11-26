#include <bits/stdc++.h>

using namespace std;

int main(){
	string cadena, patron;
	int p,t,h,w;
	getchar();
	while(getline(cin,cadena)){
		getline(cin,patron);
		t = 0;
		for(int i=0; i<patron.size(); i++){
			//p = 0;
			h = cadena.find(patron[i]);
			while(h!=-1){
				p = 1;
				w = i+1;
				h += 1;
				while(h<cadena.size() && w<patron.size() && cadena[h]==patron[w]){
					p+=1;
					w += 1;
					h += 1;
				}
				t = max(t,p);
				h = cadena.find(patron[i],h);
			}
			//t = max(t,p);
		}
		printf("%i\n",t);
	}

	return 0;
}
