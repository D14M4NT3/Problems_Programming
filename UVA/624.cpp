#include <bits/stdc++.h>
using namespace std;

vector<int> datos;
vector<int> resul;

int backt(int pos, int cant){
    int a,b;
    if(pos>datos.size()){
        return 0;
    }else if(cant==0){
        return datos[pos];
    }

    if(cant-datos[pos]>=0){
        a = backt(pos+1,cant-datos[pos]);
    }else{
        a = -1;
    }
    b = backt(pos+1,cant);

    if(a>b){
        return cant+a;
    }else{
        return cant+b;
    }
}
//[1,2,3,4]

int main(){
    int N, m, tmp;
    while(scanf("%i %i",&N, &m)==2){
        for(int i=0; i<m; i++){
            scanf("%i",&tmp);
            datos.push_back(tmp);
        }
        tmp = backt(0,N);
        cout << "salida: " << tmp << endl;
    }
    return 0;
}
