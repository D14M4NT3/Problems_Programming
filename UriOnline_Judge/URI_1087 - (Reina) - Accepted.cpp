#include <bits/stdc++.h>

int main(){
    int x1, x2, y1, y2;
    int d, h;
    while(scanf("%i %i %i %i", &x1, &y1, &x2, &y2) && x1+x2+y1+y2!=0){
        d = abs(x2-x1);
        h = abs(y2-y1);
        if(x1==x2 && y1==y2){
            printf("0\n");
        }else if(x1==x2 || y1==y2){
            printf("1\n");
        }else if(d==h){
            printf("1\n");
        }else{
            printf("2\n");
        }
    }
    return 0;
}
