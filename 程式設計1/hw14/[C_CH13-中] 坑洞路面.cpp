#include<iostream>

using namespace std;

int main()
{
	int n;
	cin>>n;
	int ans[n];
	int sum=0;
	
	for(int i=0;i<n;i++)
	{
		cin>>ans[i];
	}
	int max=0;
	for(int i=0;i<n;i++)
	{
		if(ans[i]>max)
		{
			max=ans[i];
		}
		else if(ans[i]<max)
		{
			sum+=max-ans[i];
		}
	}
	cout<<sum<<endl;
}
