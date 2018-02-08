#include <bits/stdc++.h>

int main(){
    int n, h, cont, tmp;
    scanf("%i %i", &n, &h);
    cont = 0;
    for(int i=0; i<n; i++){
        scanf("%i",&tmp);
        if(tmp>h){
            cont+=2;
        }else{
            cont+=1;
        }
    }
    printf("%i\n",cont);

    return 0;
}
