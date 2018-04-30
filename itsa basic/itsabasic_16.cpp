#include<iostream>

using namespace std;

int main()
{
	int ans=0;
	int i=0;
	string s,s2;
	getline(cin,s);
	getline(cin,s2);
	for(i=0;i<s2.length();i++)
	{	
		if(i+s.length() > s2.length())
		{
			break;
		}
		bool match = true;
		for(int j=0;j<s.length();j++)
		{
			if(s2[i+j]!=s[j])
			{
				match = false;
				break;
			}
			
	
		}
			if(match)
				ans++;
	
	}
	cout<<ans<<endl;
	return 0;
} 
