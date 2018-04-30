#include<iostream>

using namespace std;

int main()
{
	int L,n;
	int x[100];
	cin>>L;
	cin>>n;
	for(int i=0;i<n;i++)
	{
		cin>>x[i];
	}
	int minT,maxT=0;
	//計算最短時間 
	for(int i=0;i<n;i++)
	{
		//min為每一隻螞蟻掉下去的最小時間 max用來計算最後一隻螞蟻掉下去; 
		minT=max(minT,min(x[i],L-x[i]));
	}
	//計算最長時間 
	for(int i=0;i<n;i++)
	{
		//min為每一隻螞蟻掉下去的最小時間 max用來計算最後一隻螞蟻掉下去; 
		maxT=max(minT,max(x[i],L-x[i]));
	}
	cout<<minT<<maxT;
	
	
	system("pause");
}
