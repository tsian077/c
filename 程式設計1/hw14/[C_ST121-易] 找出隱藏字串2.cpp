#include<iostream>

using namespace std;


int main()
{
	string s;
	getline(cin,s);
	int n;
	cin>>n;
	cin.ignore();
	string tem[1000];
	
	for(int i=0;i<n;i++)
	{
		int count=0;
		int tem=0;
		string t;
		getline(cin,t);
		for(int j=0;j<s.size();j++)
		{
			for(int k=tem;k<t.size();k++)
			{
				if(s[j]==t[k])
				{
					count++;
					tem=k;
					break;
				
				}
			}
		}
		//cout<<count;
		if(count==s.size())
		{
			cout<<"true"<<endl;
		}
		else
		{
			cout<<"false"<<endl;
		}
	}
}
