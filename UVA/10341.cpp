#include <bits/stdc++.h>
#define eps 1e-6
#define eps2 1e-10

using namespace std;

double ecuacion(double p, double q, double r, double s, double t, double u, double x){
    return p*exp(x*-1) + q*sin(x) + r*cos(x) + s*tan(x) + t*pow(x,2) + u;
}

int main(){
    double p,q,r,s,t,u;
    double a,b, tmp, x;
    bool flag;
    while(scanf("%lf %lf %lf %lf %lf %lf", &p, &q, &r, &s, &t, &u)!=EOF){
        a = 0.000000;
        b = 1.000000;
        flag = false;
        while(b-a >= eps2){
            x   = (b+a)/2.0;
            tmp = ecuacion(p,q,r,s,t,u,x);
            //cout << "a: " << a << " - b:" << b << " - x: " << x << " :: " << tmp << endl;
            if(tmp<eps && tmp>-eps){
                printf("%.4lf\n",x);
                break;
            }else if(tmp>0.0){
                a = x;
            }else{
                b = x;
            }
        }
        //cout << tmp << endl;
        if(fabs(tmp)> eps){
            printf("No solution\n");
        }
    }
    return 0;
}
