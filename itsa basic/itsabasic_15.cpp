#include<iostream>
#include<vector>
#include<sstream>
using namespace std;

int main()
{
	int count=1;
	int A[26]={0};
	int a[26]={0};
	string s;
	getline(cin,s,'\n');
	for(int i=0;i<s.length();i++)
	{
		if(s[i] >= 'A' && s[i]<='Z')
		{
			A[s[i]-'A']++;
		}
		else if(s[i]>= 'a' && s[i]<='z')
		{
			a[s[i]-'a']++;
		}
		else if(s[i]==32)
			count++;
		else if(s[i]==46 || s[i]==44 || s[i]==58 || s[i]==33 || s[i]==63)
		{
			if(i==s.length())
			{
				count++;
			}
		}
		
	}
	cout<<count<<endl;
	for(int i=0;i<26;i++)
	{
		if(A[i]>0)
		{
			cout<<(char)('A'+i)<<" : "<<A[i]<<endl;
		}
		if(a[i]>0)
		{
			cout<<(char)('a'+i)<<" : "<<a[i]<<endl;
		}
	}
	
	
	
	
	//return 0;
}
