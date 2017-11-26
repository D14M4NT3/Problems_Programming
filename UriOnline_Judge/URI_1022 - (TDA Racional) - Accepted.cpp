#include <bits/stdc++.h>
using namespace std;

int main(){
    int cases, N1, D1, N2, D2;
    int num, den;
    char tmp;
    scanf("%i",&cases);
    while(cases-- ){
        scanf("%i / %i %c %i / %i",&N1, &D1, &tmp, &N2, &D2);
        switch(tmp){
            case '+':
                num = (N1*D2 + N2*D1);
                den = (D1*D2);
                break;
            case '-':
                num = (N1*D2 - N2*D1);
                den = (D1*D2);
                break;
            case '*':
                num = (N1*N2);
                den = (D1*D2);
                break;
            case '/':
                num = (N1*D2);
                den = (N2*D1);
                break;
        }

        if(num==0 || den==0){
            printf("%i/%i = %i/%i\n", num, den, 0, 0);
        }else{
            N1 = __gcd(num,den);
            if(N1<0){
                N1*=-1;
            }
            printf("%i/%i = %i/%i\n", num, den, num/N1, den/N1);
            //printf("GCD: %i \n", N1);
        }
    }

    return 0;
}
