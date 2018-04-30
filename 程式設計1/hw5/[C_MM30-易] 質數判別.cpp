#include<iostream>

using namespace std;

int main()
{
	bool prime=true;
	int n;
	cin>>n;
	for(int i=2;i<=n/2;i++)
	{
		if(n%i==0)
		{
			prime=false;
		}
	}
	if(prime)
	{
		cout<<"YES"<<endl;
	} 
	else
	{
		cout<<"NO"<<endl;
	}
	
	
	return 0;
}
