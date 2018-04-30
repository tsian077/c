#include<iostream>

using namespace std;

int main()
{
	int n;
	int c[25]={0};
	cin>>n;
	for(int i=0;i<n;i++)
	{
		while(n--)
		{
			int s,d;
			cin>>s>>d;
			
			for(int i=s;i<d;i++)
			{
				c[i]++;
				
			}
		}
		
		int max=0;
		for(int i=0;i<25;i++)
		{
			if(c[i]>max)
			{
				max=c[i];
			}
		} 
		cout<<max<<endl;
	}
	
	
	
	
	return 0;
}
