#include<iostream>

using namespace std;

int main()
{
	string ans;
	int count=0;
	cin>>ans;
	//cout<<ans[0];
	for(int i=0;i<ans.size();i++)
	{
		if(ans[i]=='0')
		{
			i++;
			count++;
		}
		cout<<ans[i]<<" ";
		
	}
	for(int i=1;i<count;i++)
		{
			cout<<"0";
			cout<<" ";  
		}
		cout<<"0"<<endl;
	
}

//�мg�@��{���A�����@�ꪺ��ơC�C�Ӿ�ƶ��Ϊťչj�}�A�Ҧ�����Ƴ��j�󵥩�0�C�Ч�o���Ƥ���0������̫�
//�åB��X�C�|�ҦӨ��A��J �� 
