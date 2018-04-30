#include<iostream>

using namespace std;

int main()
{
	string mstring;
	cin>>mstring;
	int count=0;
	for(int i=0;i<mstring.size();i++)
	{
		if(mstring[i]>='A' && mstring[i]<='Z')
		{
			count+=mstring[i]-'A'+1;
			cout<<char((27-(mstring[i]-'A'+1))+'A'-1);	
				
		}
		if(mstring[i]>='a' && mstring[i]<='z')
		{
			count+=mstring[i]-'a'+1;
			cout<<char(27-(mstring[i]-'a'+1)+'a'-1);
		
		}
		
	}
	cout<<" "<<count<<endl;
	
	
	
	return 0;
}
