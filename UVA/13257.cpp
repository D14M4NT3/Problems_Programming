#include <bits/stdc++.h>
#define MAX 100005

using namespace std;
string abc = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";

int pos(char a){
    for(int i=0; i<26; i++){
        if(abc[i]==a){
            return i;
        }
    }
}

int main(){

    int cases, tmp, uniq, contador;
    int vis[26];
    int vis2[26];
    string cadena;
    int datos[MAX];
    scanf("%i", &cases);
    while(cases-- >0){
        cin >> cadena;
        memset(&vis[0], -1, sizeof(vis[0]) * 26);
        memset(&datos[0], -1, sizeof(datos[0]) * MAX);
        uniq = 0;

        for(int i=cadena.size()-1; i>=0; i--){
            tmp = pos(cadena[i]);
            if(vis[tmp]==-1){
                datos[i] = uniq;
                uniq +=1;
            }else{
                datos[i] = uniq;
            }
            vis[tmp] = i;
        }

        contador = 0;
        for(int w=0; w<26; w++){
            if(vis[w]!=-1){
                memset(&vis2[0], -1, sizeof(vis2[0]) * 26);
                for(int h=vis[w]; h<cadena.size(); h++){
                    tmp = pos(cadena[h]);
                    if(vis2[tmp]==-1){

                        if(h!=vis[w]){
                            contador += datos[h];
                            vis2[tmp]=1;
                        }
                    }
                }
            }
        }
        printf("%i\n",contador);
    }

    return 0;
}
