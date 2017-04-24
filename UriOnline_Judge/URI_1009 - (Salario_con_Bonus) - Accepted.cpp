#include <bits/stdc++.h>

using namespace std; 

int main(){
	string nombre;
	double fj, bonus;
	
	cin >> nombre >> fj >> bonus;
	printf("TOTAL = R$ %.2lf\n",fj+(bonus*0.15));
	
	return 0; 
}