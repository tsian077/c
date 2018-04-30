#include<iostream>

using namespace std;

int main()
{
	int n=0;
	int p=0;
	float r=0.0;
	int total=0;
	cin>>r>>n>>p;
	for(int i=0;i<n;i++)
	{
		total+=p;
		total=total+(total*r);
	}
	cout<<total<<endl;
	
} 
