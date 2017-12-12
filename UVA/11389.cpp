#include <bits/stdc++.h>
using namespace std;
int main(){
    int n,d,r, tmp;
    int dia[105];
    int noche[105];

    while(scanf("%i %i %i",&n,&d,&r) && n+d+r!=0){
        for(int i=0; i<n; i++){
            scanf("%i",&dia[i]);
        }
        for(int i=0; i<n; i++){
            scanf("%i",&noche[i]);
        }

        sort(dia, dia+n);
        sort(noche, noche+n, greater<int>());
        tmp = 0;
        for(int i=0; i<n; i++){
            if(dia[i]+noche[i]>d){
                tmp += (dia[i]+noche[i]-d)*r;
            }
        }
        printf("%i\n",tmp);
    }
    return 0;
}
