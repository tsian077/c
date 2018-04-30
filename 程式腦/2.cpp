#include<iostream>

using namespace std;
int increment(int );
int main()
{
	int x=10;
	
	cout<<increment(x)<<endl;
	cout<<x<<endl;
	
	return 0;
} 
int increment(int n)
{
	n=n+1;
	return n;
}
