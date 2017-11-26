#include <bits/stdc++.h>
using namespace std;

int main(){
	int cases, n, tm;
	double suma,con;
	vector<int> nm;
	scanf("%i",&cases);
	while(cases-- >0){
		scanf("%i",&n);
		suma = 0;
		for(int i=0; i<n; i++){
			scanf("%i",&tm);
			nm.push_back(tm);
			suma +=tm;
		}
		suma /= n;
		con = 0;
		for(int i=0; i<n; i++){
			if(nm[i]>suma){
				con += 1;
			}
		}
		nm.clear();
		printf("%.3lf%\n",(con*100)/n);
	}
	return 0;
}
