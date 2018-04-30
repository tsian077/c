#include<iostream>
#include<stdlib.h> 
using namespace std;

int main()
{
	int n,*p,i;
	cin>>n;
	p=(int *)malloc(sizeof(int) *n);
	for(i=0;i<n;i++)
	{
		p[i]=i;
		cout<<p[i];
	}
	
	
	
	return 0;
} 
