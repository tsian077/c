#include<iostream>

using namespace std;

int main()
{	
	int n=0;
	int ans=0;
	string s1,s2;
	string num="0123456789";
	//cin>>n;
	//while(n>0)
	//{
		cin>>s1>>s2;
		int carry=0;
		int i=s1.size()-1;
		int j=s2.size()-1;
		while(i>=0 || j>=0)
		{
			ans=(s1[i]-'0')+(s2[i]-'0')+carry;
			carry=ans/10;
			ans %=10;
			cout<<num[ans];
			i--;
			j--;
			if(i==0 && carry>0)
			{
				
			}
		}	
		
		
		
		
		
	//}
	
	
	return 0;
}
