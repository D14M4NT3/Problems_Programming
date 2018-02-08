#include <bits/stdc++.h>

long long int rev(long long int x){
    long long int h = 0;
    while(x>0){
        h *= 10;
        h += x%10;
        x/=10;
    }
    return h;
}

int main(){
    int cases;
    long long int a,b;
    scanf("%i",&cases);
    while(cases-- >0){
        scanf("%lld %lld",&a,&b);
        printf("%lld\n",rev(rev(a)+rev(b)));
    }
    //printf("%i reversado\n",rev(a));
    return 0;
}
