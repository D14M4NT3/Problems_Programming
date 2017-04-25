/*
	Name: H - Through the Desert
	Copyright: CCPL 2017 - Round 1 
	Author: Christian David Gutierrez
	Date: 21/02/2017
*/


#include <bits/stdc++.h>

using namespace std; 

int main(){
	int kmAnterior=0, kmActual=0, leak=0, leakA=0, costogA=0, costog=0;
	float consumoT=0.0,temporal=0.0; 
	bool flag = false; 
	while (scanf("%d",&kmActual)){
		string evento, basura; 
		cin >> evento; 
		
		if(evento == "Fuel"){
			cin >> basura; 
			scanf("%d",&costog);
			if(costog == 0){
				break;
			}
		}else if(evento == "Leak"){
			leak += 1;
		}else if(evento == "Gas"){
			cin >> basura; 
			//consumoT = 0.0;  
		}else if(evento == "Mechanic" ){
			leak = 0;
		}else{ //Goal
			flag = true; 
		}
		
		float tleaks = ((kmActual-kmAnterior)*leakA);
		float tcostog = float((kmActual-kmAnterior)*costogA)/100;
		consumoT += tleaks + tcostog;
		
		temporal = max(consumoT,temporal);
		if(evento == "Gas"){
			consumoT = 0.0;
		}
		
		kmAnterior = kmActual;
		costogA = costog;
		leakA = leak; 
		
		if(flag){
			printf("%.3f\n",temporal);
			kmAnterior = kmActual = leak = temporal = consumoT = costog = costogA = 0.0;
			flag = false; 
		}	
	}
	return 0; 
}
