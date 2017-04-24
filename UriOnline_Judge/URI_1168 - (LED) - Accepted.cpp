#include <bits/stdc++.h>
using namespace std;

int main(){
	int leds[] = {6,2,5,5,4,5,6,3,7,6};
	int casos; 
	string entrada;
	
	scanf("%i",&casos);
	while(casos-- >0){
		cin >> entrada;
		int suma = 0;
		
		for(int i=0; i<entrada.size(); i++){
			suma += leds[entrada[i]-'0'];
		} 
		printf("%i leds\n",suma);
	}
	 
	//printf("%i",leds[0]);
	
	return 0; 
}