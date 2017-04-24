#include <bits/stdc++.h>

using namespace std; 
string mov = "NSLO";
string movD = "NLSO";
string movI = "NOSL";
//vector<string> matriz;

void movimiento(vector<string> &matriz, int a, int b, char letra, int a2, int b2){
	int temp;
	char tm;
	
	if(letra == 'D'){ // 90 grados derecha
		temp = movD.find(matriz[a][b]);
		if(temp!=-1){
			tm = movD[(temp+1)%4];
			matriz[a][b] = tm;
		}
	}else if(letra == 'E'){ // 90 grados izquierda
		temp = movI.find(matriz[a][b]);
		if(temp!=-1){
			tm = movI[(temp+1)%4];
			matriz[a][b] = tm;
		}
	}else{	// paso
		if(a!=a2 || b!=b2){
			tm = matriz[a2][b2];
			matriz[a][b] = tm;
			matriz[a2][b2] = '.';
		}
	}
	
	//return matriz;
}

int main(){
	int N,M,S, tmp;
	int x,y;
	bool fnd;
	
	string K; 
	string instruc;
	
	vector<string> matriz;
	
	while(scanf("%i %i %i",&N,&M,&S) && N+M+S!=0){
		fnd = false; 
		for(int i=0; i<N; i++){
			cin >> K;
			matriz.push_back(K);
			if(!fnd){
				for(int j=0; j<4; j++){
					tmp = K.find(mov[j]);
					if(tmp!=-1){
						fnd = true;
						x = i; 
						y = tmp;
					}
				}
			}
		}
		
		cin >> instruc;
		int x2 = x; 
		int y2 = y;
		int cont = 0; 
		
		for(int i=0; i<instruc.size(); i++){
			if(instruc[i]=='F'){	// movimiento
				if(matriz[x2][y2] == 'N' && x>0){ 	// validacion NORTE
					x-=1; 
				}else if(matriz[x2][y2] == 'S' && x<N-1){// validacion SUR 
					x+=1;
				}else if(matriz[x2][y2] == 'L' && y<M-1){
					y+=1;
				}else if (matriz[x2][y2] == 'O' && y>0){
					y-=1;
				}
				if(matriz[x][y]=='*'){
					cont+=1;
				}
				if(matriz[x][y]!='#'){
					movimiento(matriz,x,y,instruc[i], x2, y2); //actual - anterior
					x2 = x; 
					y2 = y; 
				}else{
					x = x2; 
					y = y2; 
				}
			}else{
				movimiento(matriz,x,y,instruc[i], -1, -1);
			}
			//mostrar(matriz);
		}
		printf("%i\n",cont);
		matriz.clear();
	}
	
	return 0; 
}