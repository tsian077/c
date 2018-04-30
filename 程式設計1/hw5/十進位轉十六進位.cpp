#include<iostream>

using namespace std;

int main()
{
	int n;
	int ans[10];
	int i=0;
	cin>>n;
	while(n/16!=0)
	{
	ans[i]=n%16;
	//cout<<n%16;
	n=n/16;
	i++;
	}
	ans[i]=n;
	//cout<<ans[i];
	for(int j=i;j>=0;j--)
	{
		if(ans[j]==10)
		{
			cout<<"A";
		}
		else if(ans[j]==11)
		{
			cout<<"B";
		} 
		else if(ans[j]==12)
		{
			cout<<"C";
		}
		else if(ans[j]==13)
		{
			cout<<"D";
		}
		else if(ans[j]==14)
		{
			cout<<"E";
		}
		else if(ans[j]==15)
		{
			cout<<"F";
		}
		else
			cout<<ans[j];
	}
	cout<<endl;
		
		
	return 0;
} 
