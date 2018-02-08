#include <bits/stdc++.h>
using namespace std;
int a[10] = {0,0,0,0,0,0,0,0,0,0};
int b[2] = {0,0};

bool unicos(int h, int w){
    int z,tmp;
    tmp = 0;
    while(h>0){
        z = h%10;
        if(a[z]!=0){
            return false;
        }else{
            a[z]+=1;
        }
        h/=10;
        tmp+=1;
    }
    b[w]=tmp;
    return true;
}

bool answ(int p, int r, int e){
    if(b[0]==5 && b[1]==5){
        printf("%i / %i = %i\n",p, r, e);
    }else if((b[0]!=4 || b[1]!=4) && a[0]==0){
        if(b[0]==4){
            printf("%05d / %i = %i\n",p, r, e);
        }else{
            printf("%i / %05d = %i\n",p, r, e);
        }
    }else{
        return false;
    }
    return true;
}

int main(){
    int N,R;
    bool flag;
    scanf("%i",&N);
    while(N!=0){
        flag = false;
        for(int i=1234; i<=98765; i++){
            R = N*i;
            memset(a,0,sizeof(a));
            if(R<=98765 && unicos(R,0) && unicos(i,1)){
                if(answ(R,i,N)){
                    flag = true;
                }
            }
        }
        if(!flag){
            printf("There are no solutions for %i.\n",N);
        }
        scanf("%i",&N);
        if(N!=0){
            printf("\n");
        }
    }
}
