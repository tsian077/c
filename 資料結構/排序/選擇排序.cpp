#include<iostream>

using namespace std;


int main()
{
	int a[8]={50,40,35,90,72,51,85,43};
	int n=8,t=0,m=0,i=0,j=0;
	for(i=0;i<n-1;i++)
	{
		//m用來控制每個位數使其不被m=j的結果影響到位排序的資料
		//Ex i=0時 m=j 將m變為2 如果沒有m=i 將會使a[1]的 資料沒有被排序到 
		m=i;
		for(j=i+1;j<n;j++)
		{
			if(a[j]<a[m])  //找出最小者，並將其值給m用來後面的交換資料 
			m=j;
			
		}
		t=a[i];  //將目前位置丟給暫存 
		a[i]=a[m];//目前位置與最小者交換 
		a[m]=t;  //將暫存給最小原本的位置 
	}
	for(int i=0;i<n;i++)
	{
		cout<<a[i]<<" ";
	}


	return 0;
} 
