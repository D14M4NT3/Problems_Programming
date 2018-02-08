#include <bits/stdc++.h>

using namespace std;
int a, b;
vector<string> matriz;

void verifica(int x, int y, int tmp, char s){

    if(tmp == 1){ //bajando
        for(int j=0; j<b; j++){
            if(j!=y && matriz[x][j]==s){
                matriz[x][j] = '+';
                matriz[x][y] = '+';
                verifica(x,j,2,s);
            }
        }
    }else if(tmp == 2){ //derecha
        for(int i=0; i<a; i++){
            if(i!=x && matriz[i][y]==s){
                matriz[i][y] = '+';
                matriz[x][y] = '+';
                verifica(i,y,1,s);
            }
        }
    }else{
        verifica(x,y,1,s);
        verifica(x,y,2,s);
    }
}


int main(){
    string cadena;
    string salida = "";
    scanf("%i %i",&a, &b);

    for(int i=0; i<a; i++){
        cin >> cadena;
        matriz.push_back(cadena);
    }
    for(int i=0; i<a; i++){
        for(int j=0; j<b; j++){
            if(matriz[i][j]!='+'){
                verifica(i,j,3,matriz[i][j]);
            }
            if(matriz[i][j]!='+'){
                salida+=matriz[i][j];
            }
        }
    }
    cout << salida <<"\n";
    return 0;
}
