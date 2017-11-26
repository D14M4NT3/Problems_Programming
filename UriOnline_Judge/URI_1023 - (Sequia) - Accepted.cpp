#include <bits/stdc++.h>
using namespace std;

int main(){
    int cases, tc, tp, tmp;
    int X,Y, t, mas;
    float a;
    int datos[201];
    t = 1;
    while(scanf("%i",&cases) && cases!=0){
        memset(&datos,0,sizeof(datos));
        tc = tp = 0;
        mas = 0;
        for(int i=0; i<cases; i++){
            scanf("%i %i",&X,&Y);
            tc += Y;
            tp += X;
            tmp = Y/X;
            mas = max(tmp, mas);
            datos[tmp]+=X;
        }
        if(t!=1){
            printf("\nCidade# %i:\n",t);
        }else{
            printf("Cidade# %i:\n",t);
        }
        for(int j=0; j<mas+1; j++){
            if(datos[j]!=0){
                if(j!=mas){
                    printf("%i-%i ",datos[j],j);
                }else{
                    printf("%i-%i\n",datos[j],j);
                }
            }
        }
        a = floor(100*double(tc)/double(tp));
        printf("Consumo medio: %.2f m3.\n", a/100);
        t+=1;
    }
    return 0;
}
