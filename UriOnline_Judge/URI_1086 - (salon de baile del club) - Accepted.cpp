#include <bits/stdc++.h>
using namespace std;

int tablas(int dat[],int x, int t, int w){
    int cont = 0;
    int c2 = 0;
    for(int j=t-1; j>=0; j--){
        if(c2==w){
            break;
        }
        if(dat[j]==x){
            cont+=1;
            c2+=1;
            dat[j]=0;
        }else if(dat[j]<x){
            for(int i=0; i<t; i++){
                if(dat[j]+dat[i]==x && j!=i && (dat[j]!=0 && dat[i]!=0)){
                    cont+=2;
                    c2+=1;
                    dat[i]=0;
                    dat[j]=0;
                    break;
                }else if(dat[j]+dat[i]>x){
                    break;
                }
            }
        }
    }

    if(c2!=w){
        return -1;
    }else{
        return cont;
    }

}

int main(){
    int n,m,ancho,k, tmp, a,b;
    bool flag;
    int datos[100000];
    int tm[100000];
    while(scanf("%i %i", &n,&m) && n+m!=0){
        flag = true;
        scanf("%i %i",&ancho,&k);

        if(n*100%ancho!=0 && m*100%ancho!=0){
            flag=false;
        }

        for(int i=0; i<k; i++){
            scanf("%i",&datos[i]);
            //datos.push_back(tmp);
        }
        if(flag){
            sort(datos,datos+k);
            copy(datos,datos+k,tm);
            //tm = datos[0:k];
            if(m*100%ancho==0){
                a = tablas(datos,n,k, m*100/ancho);
            }else{
                a = -1;
            }

            if(n*100%ancho==0){
                b = tablas(tm,m,k, n*100/ancho);
            }else{
                b = -1;
            }
            if(a!=-1 && b!=-1){
                k = min(a,b);
                printf("%i\n",k);
            }else if(a!=-1 || b!=-1){
                k = max(a,b);
                printf("%i\n",k);
            }else{
                printf("impossivel\n");
            }
        }else{
            printf("impossivel\n");
        }

    }
    return 0;
}
