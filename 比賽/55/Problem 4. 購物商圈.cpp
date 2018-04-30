#include<iostream>

using namespace std;

int main()
{
	
	int n;
	int m;
	cin>>n>>m;        //輸入 
	int ans[100][100];
	for(int i=0;i<m;i++)
	{
		for(int j=0;j<m;j++)
		{
			cin>>ans[i][j];
		}
	}
	
	int p,q;  
	int min=100;
	int temp;
	
	
	for(int j=0;j<n;j++)
	{
		cin>>p>>q;
		min=100;
		for(int i=0;i<m;i++)
		{
		
			temp=ans[p][i]+ans[q][i];
			if(temp<min)
			{
				min=temp;
			}
			
		}
		cout<<min<<endl;  //輸出最小 */
	}
	
	
	
	
	return 0;
} 
