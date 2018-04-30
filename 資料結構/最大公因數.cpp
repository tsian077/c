#include<iostream>
int count=0;
using namespace std;
int gcd(int a,int b)
{
	if(a%b==0)
		return b;
	else
		count++;
		return gcd(b,a%b);
	
}
int main()
{
	int a=0;
	gcd(18,32);
	cout<<count;
	return 0;
} 
