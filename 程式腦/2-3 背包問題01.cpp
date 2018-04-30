#include<stdio.h>
#include<stdlib.h>
#include<iostream>
using namespace std;
#define MAX 100
int n,W;
int w[MAX],v[MAX];


int rec(int i,int j)
{
	int res;
	if(i==n){
		//已經沒有物品了
		res==0; 
	}
	else if(j<w[i])
	{
		//因為超過最大重量，所以跳過 
		res= rec(i+1,j);
	}
	else
	{
		//分別嘗試選擇的情況與不選擇的情況 
		res=max(rec(i+1,j),rec(i+1,j-w[i])+v[i]);
	}
	return res;
}
void solve()
{
	printf("%d\n",rec(0,W));
}
int main ()
{
	 cout<<"輸入n個物品";
	 cin >>n;
	 cout<<"輸入(w,v)";
	 for(int i=0;i<n;i++)
	 {
	 	cin>>w[i];
	 	cin>>v[i];
	 } 
	 cout<<"輸入最大";
	 cin >>W;
	solve();
	return 0;
	
} 
