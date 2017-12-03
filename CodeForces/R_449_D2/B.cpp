#include <bits/stdc++.h>
using namespace std;

int rev(int x ){
    int rever = 0;
    while(x>0){
        rever = rever*10 + x%10;
        x/=10;
    }
    return rever;
}

int dig(long long int x){
    if(x<10){
        return 1;
    }else if(x<100){
        return 2;
    }else if(x<1000){
        return 3;
    }else if(x<10000){
        return 4;
    }else if(x<100000){
        return 5;
    }else{
        return 6;
    }
}

int main(){
    long long int n,m, suma, tmp;
    suma = 0;
    scanf("%lld %lld",&n, &m);
    for(int i=1; i<n+1; i++){
        tmp = i;
        for(int j=0; j<dig(i); j++){
            tmp*=10;
        }
        tmp += rev(i);
        suma += tmp%m;
    }
    printf("%lld\n",suma%m);
    return 0;
}
