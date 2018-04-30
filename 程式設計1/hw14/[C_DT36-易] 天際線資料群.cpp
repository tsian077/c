#include<iostream>
#include<string.h>
using namespace std;

int main()
{
	
	int x,y;
	int n;
	cin>>n;
	int ans[n][2];
	string ou[n];
	int i;
	for(i=0;i<n;i++)  //將資料輸入 
	{
	cin>>ans[i][0]>>ans[i][1];
	}
	
	for(int j=0;j<n;j++)
	{
		x=ans[j][0]; //比較的值的X 
		y=ans[j][1]; //比較的值的Y 

		//去陣列裡搜尋是否是天際線資料 
		for(int k=0;k<n;k++)
		{
			//如果有資料大於等於X和大於Y那就不是天際線資料 
			if((ans[k][0]>=x && ans[k][1]>y) || (ans[k][0]>x && ans[k][1]>=y))
			{
				ou[j]='N';
				break;
			}	
			else
			{
				ou[j]="Y";
				//break;
				
			}
		}
		
	}
		
		
	
	for(int i=0;i<n-1;i++)
	{
		cout<<ou[i]<<" ";
	}
	cout<<ou[n-1]<<endl;


}
