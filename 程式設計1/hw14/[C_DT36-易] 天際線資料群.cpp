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
	for(i=0;i<n;i++)  //�N��ƿ�J 
	{
	cin>>ans[i][0]>>ans[i][1];
	}
	
	for(int j=0;j<n;j++)
	{
		x=ans[j][0]; //������Ȫ�X 
		y=ans[j][1]; //������Ȫ�Y 

		//�h�}�C�̷j�M�O�_�O�ѻڽu��� 
		for(int k=0;k<n;k++)
		{
			//�p�G����Ƥj�󵥩�X�M�j��Y���N���O�ѻڽu��� 
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
