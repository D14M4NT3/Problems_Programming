#include <cstdlib>
#include <iostream>
#include <cmath>

using namespace std;

int main()
{
	int i=2; 
	long a=600851475143; // manejo de numeros grandes
	while (i<=a) //incluye a, para cuando el resto es un numero primo. 
	{
		if (a%i==0)
		{
			cout<<a<<" -> "<<i<<endl; 
			a/=i; 
		}
		i+=1;
	}

}
