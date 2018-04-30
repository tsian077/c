#include<iostream>
using namespace std;

int main()
{
	int ans[7];
	for(int i=0;i<6;i++)
	{
		cin>>ans[i];
	}
	for(int j=5;j>0;j--)
	{
		cout<<ans[j]<<" ";
	}
	cout<<ans[0]<<endl;
	//return 0;
} 
