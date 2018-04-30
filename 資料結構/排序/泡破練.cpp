#include<iostream>

using namespace std;

int main()
{
	int temp;
	int ans[10]={6,9,26,2,8,16,89,16,1,10};
	for(int i=0;i<10;i++)
	{
		for(int j=0;j<9;j++)
		{
			if(ans[j]>ans[j+1])
			{
				temp=ans[j];
				ans[j]=ans[j+1];
				ans[j+1]=temp;
			}
		}
	}
	for(int i=0;i<10;i++)
	{
		cout<<ans[i]<<" ";
	} 
	
}
