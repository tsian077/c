#include<iostream>

using namespace std;

int main()
{
	int temp;
	int i,j;
	int ans[10]={6,9,26,2,8,16,89,16,1,10};
	for(int i=1;i<10;i++)
	{
		int next; //�q1�}�l �]����0�S����k���L����� 
		next=ans[i];	//�����X�|���ƧǪ��Ĥ@����� 
		for(j=i-1;j>=0 && next<ans[j];j--) //�p�G�|���ƧǪ��Ĥ@�� 
		{								   // ��e�@���٤p�N��o�Ჾ 
			ans[j+1]=ans[j];			   //�b��e�e�@��h��
										   // �p�G�S��p�N�b�� 
		}
		ans[j+1]=next;					  //�����W���j���ȴ��J���� 
										  //�Ƨǧ� 
	}
	for(int i=0;i<10;i++)
	{
		cout<<ans[i]<<" ";
	} 

	
}
