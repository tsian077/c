#include<iostream>
#include<string.h>
using namespace std;

int main()
{
	int s;
	int ans;
	int nt[1000];
	cin>>s;
	for(int i=0;i<s;i++)
	{
		int n,m;
		cin>>n>>m;
		memset(nt,0,1000);
		for(int j=1;j<=n;j++) //n­ÓÄÑ¥] 
		{
			cin>>nt[j];
		}
		while(m>0)
		{
			int q,r;
			cin>>q>>r;
			ans=0;
			for(int a=q;a<=r;a++)
			{
				ans+=nt[a];
			}
			cout<<ans<<"\n";
			m--;
		}
		
		
	}
	

	return 0;
} 
