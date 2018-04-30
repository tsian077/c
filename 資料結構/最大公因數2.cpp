#include<iostream>

using namespace std;
int gcd(int m,int n)
{
	int r;
	while(n!=0)
	{
		r=m%n;
		m=n;
		n=r;
	}
}

int main()
{


	int a=gcd(18,24);
	
	
	return 0;
}
