#include <bits/stdc++.h>

using namespace std; 

int main(){
	unsigned int n, k; 
	//cout << sizeof(n) << endl; 
	while (cin >> n){
		cin >> k; 
		cout << (n^k) << endl;
	}
	return 0; 
}