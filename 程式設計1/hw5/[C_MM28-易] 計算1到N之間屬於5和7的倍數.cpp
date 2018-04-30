#include<iostream>

using namespace std;

int main()
{
	int n;
	int ans[1000];
	int j=0;
	cin>>n;
	for(int i=1;i<=n;i++)
	{
		if(i%5==0 && i%7==0 )
		{
			ans[j]=i;
			j++;
		}
		
	}
	for(int i=0;i<j-1;i++)
	{
		cout<<ans[i]<<" ";
	}
	cout<<ans[j-1]<<endl;
}
