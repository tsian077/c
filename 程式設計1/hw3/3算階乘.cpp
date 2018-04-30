#include<iostream>

using namespace std;

int main()
{
	int ans=1;
	int n=0;
	cin>>n;
	
	if(n<20 && n>0)
	{
		for(int i=1;i<=n;i++)
		{
			ans=ans*i;
		}	
	}
	else
	{
		ans=0;
	}
	cout<<ans<<endl;
	
}
