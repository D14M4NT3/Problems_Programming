#include <bits/stdc++.h>

using namespace std;

string convertToString (int a)
{

	ostringstream temp;
    temp<<a;
    return temp.str();

    //int i;
  	//string cadena = "";
  	//char buffer [sizeof(int)];
  	//cadena = ltoa (a,buffer,10);
  	//cout << cadena << endl;
  	//return cadena;
}

void process(vector<int> &algo){
	int tmp = algo[0];
	for(int i=0; i<algo.size()-1; i++){
		algo[i] = abs(algo[i]-algo[(i+1)]);
	}
	algo[algo.size()-1] = abs(algo[algo.size()-1]-tmp);
}

bool veri(vector<int> &algo){
	for(int i=0; i<algo.size(); i++){
		if(algo[i]!=0){
			return false;
		}
	}
	return true;
}

int main(){
	int cases, tm, tmp;
	bool flag = true;
	scanf("%i",&cases);
	vector<int> basic;
	string cadena, ctmp;

	while(cases-- >0){
		scanf("%i",&tm);
		cadena = "";
		basic.clear();
		flag = true;

		for(int i=0; i<tm; i++){
			scanf("%i",&tmp);
			cadena += convertToString(tmp);
			basic.push_back(tmp);
		}
		cadena += "|";
		while(flag){
			process(basic);
			if(veri(basic)){
				printf("ZERO\n");
				flag = false;
			}else{
				ctmp = "";
				for(int j = 0; j<tm; j++){
					ctmp += convertToString(basic[j]);
				}

				if(cadena.find(ctmp) != std::string::npos){
					printf("LOOP\n");
					flag = false;
				}else{
					cadena += ctmp+"|";
				}

			}
		}
	}

	return 0;
}
