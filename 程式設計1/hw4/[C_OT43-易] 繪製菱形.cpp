#include<iostream>

using namespace std;

int main()
{
	int n;
	cin>>n;
	for(int i=0;i<n;i++)
	{
		for(int k=i;k<n-1;k++)
			cout<<" ";
		for(int j=0;j<2*i+1;j++)
		{
			cout<<"*";
		}
		cout<<endl;
	}
	for(int i=0;i<n-1;i++)
	{
		for(int f=0;f<i+1;f++)
		{
			cout<<" ";
		}
		for(int l=(n*2)-3;l>i*2;l--)
		{
			cout<<"*";
		}
		cout<<endl;
	}
	
	
	
	return 0;
}
