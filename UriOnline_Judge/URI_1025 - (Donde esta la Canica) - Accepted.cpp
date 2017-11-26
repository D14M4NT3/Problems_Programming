#include <bits/stdc++.h>
int datos[10050];
using namespace std;

int binarySearch(int k, int a, int b)
{
  while (a <= b){
    int m = a + (b-a)/2;
    if (datos[m] == k)
        return m;

    if (datos[m] < k)
        a = m + 1;
    else
        b = m - 1;
  }
  return -1;
}

int main(){
    int N,Q, t, tmp, tmp2;
    t = 1;
    while(scanf("%i %i", &N, &Q) && N+Q!=0){
        for(int i=0; i<N; i++){
            scanf("%i",&datos[i]);
        }

        sort(datos,datos+N);
        printf("CASE# %i:\n",t);
        for(int j=0; j<Q; j++){
            scanf("%i", &tmp);
            tmp2 = binarySearch(tmp,0,N-1);
            if(tmp2!=-1){
                while(datos[tmp2]==tmp){
                    tmp2-=1;
                }
                printf("%i found at %i\n", tmp, tmp2+2);
            }else{
                printf("%i not found\n", tmp);
            }
        }

        t+=1;
    }
    return 0;
}
