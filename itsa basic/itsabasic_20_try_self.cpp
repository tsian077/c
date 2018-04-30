#include<iostream>

using namespace std;

int main()
{
	string s1;
	string s2;
	int i=0,j=0;
	int n=0;
	cin>>n;
	string num="0123456789";
	for(int k=0;k<=n;i++)
	{
		cin>>s1;
		cin>>s2;
		
		i=s1.size()-1;
		j=s2.size()-1;
		int ten=0;
		int t;
		string ans;
		while(i>=0 || j>=0)
		{
			t=0;
			if(i>=0 && j>=0)
			{
				t=s1[i]-'0'+s2[j]-'0'+ten;
			}
			else if(i>=0)
			{
				t=s1[i]-'0'+ten;
			}
			else if(j>=0)
			{
				t=s2[j]-'0'+ten;
			}
			 ten=0;
			while(t>=10)
			{
				ten++;
				t=t-10;
			}
			i--;
			j--;
			ans=num[t]+ans;
			
		}
		if(ten>0)
		ans=num[ten]+ans;
		cout<<ans<<endl;
	}
	
	//return 0;
} 
