#include<iostream>

using namespace std;

int main()
{
	int a[]={1,50,40,35,90,72,51,85,43};
	int b=sizeof(a)/4;
	for(int i=0;i<b;i++)
	{
		//�����W�@���̫�@��
		for(int j=0;j<b-1;j++)  
		{
			if (a[j]>a[j+1])  //����� �j�����Ჾ 
			{
				int t;
				t=a[j];
				a[j]=a[j+1];
				a[j+1]=t;
			}
		} 
		
	}
	for(int i=0;i<b;i++)
	{
		cout<<a[i]<<" ";
	}
	return 0;
} 
