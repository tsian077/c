#include<iostream>
#include<string>
using namespace std;

int main()
{
	string ans;
	long int n;
	getline(cin,ans);
	cout<<ans.size();
	cin>>n;
	cin.ignore();
	for(int i=0;i<n;i++)
	{
		string token;
		getline(cin,token);
		int count=0;
		int pos=0;
		int tem=0;
		for(int j=0;j<ans.size();j++)
		{
						
			pos=token.find(ans[j],pos); //�M��pos 
			if(pos>0)	//���N�[�@ 
			{
				count++;
				tem=pos;
			}
			else if(pos==string::npos) //�p�G�S���q�W�@���~��� 
			{
				pos=tem;
			}
			pos++;
			
			
		}
		
		if(count==ans.size()-1)
		{
			cout<<"true"<<endl;
		}
		else
		{
			cout<<"false"<<endl;
		}
	}
	
}
