#include<iostream>

using namespace std;


int main()
{
	int a[8]={50,40,35,90,72,51,85,43};
	int n=8,t=0,m=0,i=0,j=0;
	for(i=0;i<n-1;i++)
	{
		//m�Ψӱ���C�Ӧ�ƨϨ䤣�Qm=j�����G�v�T���ƧǪ����
		//Ex i=0�� m=j �Nm�ܬ�2 �p�G�S��m=i �N�|��a[1]�� ��ƨS���Q�ƧǨ� 
		m=i;
		for(j=i+1;j<n;j++)
		{
			if(a[j]<a[m])  //��X�̤p�̡A�ñN��ȵ�m�Ψӫ᭱���洫��� 
			m=j;
			
		}
		t=a[i];  //�N�ثe��m�ᵹ�Ȧs 
		a[i]=a[m];//�ثe��m�P�̤p�̥洫 
		a[m]=t;  //�N�Ȧs���̤p�쥻����m 
	}
	for(int i=0;i<n;i++)
	{
		cout<<a[i]<<" ";
	}


	return 0;
} 
