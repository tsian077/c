#include<iostream>
#include<string.h>
using namespace std;

int main()
{
	int ans[129];
	bool repeat=true;
	memset(ans,0,sizeof(ans));
	int n=0;
	cin>>n;
	for(int i=0;i<n;i++)
	{
		cin>>ans[i];
		for(int j=0;j<i;j++)
		{
			if(ans[j]==ans[i])
			{
				repeat=false;
			}
		}
		
	}
	if(repeat)
	{
		cout<<"1"<<endl;
	}
	else
	{
		cout<<"0"<<endl;
	}
	
	return 0;
} 
