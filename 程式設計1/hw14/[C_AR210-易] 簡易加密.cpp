#include<iostream>

using namespace std;

int main()
{
	int n;
	cin>>n;
	for(int i=0;i<n;i++)
	{
		char input;
		cin>>input;
		cout<<char(input+2)<<endl;
	}
	
	
	return 0;
}
