#include<iostream>

using namespace std;

int main(){
	int n=0,m=0;
	cin>>m>>n;
	for(int i=1;i<=m;i++)
	{
		for(int j=1;j<=n;j++)
		{
			cout<<i<<" x "<<j<<" = "<<j*i<<endl;
		}
	}
	
	
}
