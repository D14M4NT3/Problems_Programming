#include <bits/stdc++.h>

int main(){
    int a, b, cont;
    scanf("%i %i", &a, &b);
    cont = 0;
    while(a<=b){
        a*=3;
        b*=2;
        cont+=1;
    }
    printf("%i\n",cont);
    return 0;
}
