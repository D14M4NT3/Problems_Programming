#include <cstdlib>
#include <iostream>
#include <cmath>

using namespace std;

int main()
{
	int suma=0,x;
	for (x=0; x<1000; x++)
	{
		if (x%3==0 or x%5==0)
		{
			suma+=x;
		}
	}
	
	cout<<suma;



}
