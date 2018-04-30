#include<iostream>

using namespace std;

int main()
{
	int ans[5]={9,3,7,1,5};
	int next;
	int n=sizeof(ans)/4;
	int j;
	for(int i=0;i<n;i++)
	{
		next=ans[i];	//下一個的值 
		for( j=i-1;j>=0 && next<ans[j];j--)
		{
			ans[j+1]=ans[j];
	
		} 
		ans[j+1]=next;
	}
	for(int i=0;i<n;i++)
	{
		cout<<ans[i];
	}
	
} 
