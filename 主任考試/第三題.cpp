#include<iostream>

using namespace std;

int main()
{
	int h;
	cin>>h;
	for(int i=1;i<=h;i++)
	{
		for(int j=h;j>i;j--)
		{
			cout<<" ";
		}
		for(int k=1;k<=(2*i)-1;k++)
		{
			cout<<i;
		}
		
		cout<<endl;
	}
	
	
}

//�п�J�@�Ӿ��H�A�åB��X���U���ϧ� 
