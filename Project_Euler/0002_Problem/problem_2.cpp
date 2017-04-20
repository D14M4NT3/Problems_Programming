#include <cstdlib>
#include <iostream>
#include <cmath>

using namespace std;

int main()
{
	int suma=0, a=1,b=1,c=0;
	 
	while (c<4000000)
	{
		c=a+b;
		a=b;
		b=c;
		if (c%2==0)
		{
			suma+=c;
		}	
	}
	cout<<suma;



}
