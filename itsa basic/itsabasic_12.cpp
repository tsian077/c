#include<iostream>
int function(int n);
using namespace std;

int main()
{
	int n=0;
	cin>>n;
	
	cout<<function(n)<<endl;	
	
	
	return 0;
} 
int function(int n)
{
	if(n==1 || n==0)
	{
	   return n+1;
	}
	else
	{
	return (function(n-1)+function(n/2));	
	}
	
}
