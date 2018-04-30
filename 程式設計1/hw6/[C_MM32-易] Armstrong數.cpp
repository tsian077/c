#include<iostream>

using namespace std;

int main()
{
	int n;
	int ans;
	while(cin>>n)
	{
		ans=0;
		int ans2=n;
		int a[4];
		a[0]=n/100;
		n=n%100;
		a[1]=n/10;
		a[2]=n%10;
		for(int i=0;i<3;i++)
		{
			ans+=(a[i]*a[i]*a[i]);
		}
		if(ans==ans2)
		{
			cout<<"Yes"<<endl;
		}
		else
		{
			cout<<"No"<<endl;
		}
	}
} 
