#include <bits/stdc++.h>

using namespace std; 

int main(){
	int N,M,temp; 
	int sable[3][3]  = {{7,7,7},{7,42,7},{7,7,7}};
	
	scanf("%i %i",&N,&M);
	
	vector<vector<int> > campo(N);
	//vector<int> tp;
	//int campo[N][M];
	for(int i=0; i<N; i++){
		for(int j=0; j<M; j++){
			scanf("%i",&temp);
			campo[i].push_back(temp);
			//campo[i][j] = temp; 
		}
		//campo.push_back(tp);
		//tp.clear();
	}
	
	int tx,ty;
	int ix,jy; 
	bool flag,f2;
	for(int i=0; i<=N-3; i++){
		for(int j=0; j<=M-3; j++){
			flag = true; 
			tx = ty = 0; 
			ix = i; 
			jy = j;
			
			while(tx<3 && flag==true){
				if(campo[ix][jy]!=sable[tx][ty]){
					flag = false;
					f2=false;
				}else{
					f2=true;
				}
				
				if(ty==2){
					ix+=1;
					tx+=1;
					ty = 0;
					jy = j; 
				}else{
					ty+=1; 
					jy+=1; 
				}
			}
			
			if(flag && f2){
				printf("%i %i\n",i+2,j+2);
				return 0; 
				//break;
			}
		}
	}
	if(!f2){
		printf("0 0\n");
		return 0; 
	}
}