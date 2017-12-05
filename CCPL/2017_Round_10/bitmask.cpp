#include <bits/stdc++.h>
using namespace std; 

string conv(int unsigned n){
	string sal="";
	for(int i=31; i>=0; i--){
		if(n&(1<<i)) sal+="1";
		else sal+="0";
	}
	return sal; 
}

string conv2 (string cadena){
	string sal = "";
	bool flag = false;
	for (int i=0; i<cadena.size(); i++){
		if(cadena[i]=='1'){
			flag = true;
		}
		if(flag){
			if(cadena[i]=='0'){
				sal+='1';
			}else{
				sal+='0';
			}
		}
	}
	return sal;
}
int main(){
	string a = conv(100);
	string b =conv2(a);
	cout << b << " -- " << a << endl; 
	
	return 0; 
}
