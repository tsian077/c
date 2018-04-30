#include<iostream>

using namespace std;

int main()
{
	int n=0;
	cin>>n;
	
	bool prime[2000001];
	for(int i=0;i<200000;i++)
	{
		prime[i]=true;
	}
	prime[0]=false;
	prime[1]=false;
	
	for(int i=2;i<=200000;i++)
	{
		if(prime[i])
		{
			for(int j=i+i;j<=200000;j+=i)
			{
				prime[j]=false;
			}
		}
	}
	/*for(int i=0;i<200;i++)
	
	{
		cout<<i<<" "<<prime[i]<<endl;
	}*/
	for(int j=n;j>0;j--)
	{
		if(prime[j]==1 && n!=j)
		{
			cout<<j<<endl;
			break;
		}
	}
	return 0;
}
