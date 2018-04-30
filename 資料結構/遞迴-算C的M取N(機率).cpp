#include<iostream>

using namespace std;
int bin(int m,int n)
{
	if(n==m || n==0)
		return 1;
	else
	{
	 	return bin(m-1,n)+bin(m-1,n-1);	
	}
}
int main()
{
	int n=0,m=0;
	
	while(cin>>m>>n)
	{
	cout<<bin(m,n)<<endl;	
	}
	
	
} 
