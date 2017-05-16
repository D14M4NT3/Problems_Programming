#include <bits/stdc++.h>

using namespace std; 

int main(){
	int cases, cn;
	string s1, s2;  
	scanf("%i", &cases); 
	while(cases-- >0){
		cin >> s1 >> s2; 
		if(s2.size()>s1.size()){
			printf("nao encaixa\n");
		}else{
			cn = 0;  
			for(int i=s2.size()-1, j=s1.size()-1; i>=0; i--, j--){
				//cout << i << " - " << j << endl; 
				if(s2[i] == s1[j]){
					//cout << "ento" << s2[i] << " - " << s1[j]<< endl;
					cn +=1; 
				}else{
					break;
				}
			}
			if(cn==s2.size()){
				printf("encaixa\n");
			}else{
				printf("nao encaixa\n");
			}
		}
	}
	return 0; 
}