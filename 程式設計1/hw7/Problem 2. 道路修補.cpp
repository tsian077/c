#include<iostream>
#include<string.h>
using namespace std;

int main()
{
	int ans[10000];
	memset(ans,0,sizeof(ans));
	int n=0,n2=0;
	int a=0,b=0;
	int count=0;
	cin>>n;
	for(int i=0;i<n;i++)
	{
		cin>>n2;
		for(int j=0;j<n2;j++)
		{
			cin>>a>>b;
			for(int k=a;k<b;k++)
			{
				ans[k]=1;
			}
		}
		for(int l=0;l<100;l++)
		{
			if(ans[l]==1)
			{
			count++;
			ans[l]=0;
			}
			
			
		}
		cout<<count<<endl;
		count=0;
	}
	

	
	//return 0;
}
