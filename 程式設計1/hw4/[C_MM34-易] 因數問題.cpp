#include<iostream>

using namespace std;

int main()
{
	int n;
	cin>>n;
	while(cin>>n)
	{
		for(int i=1;i<n;i++)
		{
		if(n%i==0)
			cout<<i<<" ";
		}
		cout<<n<<endl;		
	}
		
	
	
	return 0;
}
