#include<iostream>

using namespace std;

int main()
{
	int n;
	cin>>n;
	if(n==0)
	{
		cout<<"No answer"<<endl;
	}
	for(int i=0;i<n;i++)
	{
		for(int k=i;k<n-1;k++)
		{
			cout<<" ";
		}	
		for(int j=0;j<9+2*i;j++)
		{
			cout<<"*";
		}
		cout<<endl;
	}

	
}
