#include<iostream>
#include<string.h>
using namespace std;

int main()
{
	
	int n=0;
	int i=0;
	while(cin>>n && n<33 && n)
	for(i=0;i<n;i++)
	{
		if(i==0)
		cin.get();
		int sum=0;
		string input;
		getline(cin,input);
		int len=input.size();
		for(int j=0;j<len;j++)
		{
			sum+=input[j];
		}
		cout<<sum<<endl;
	}
	 
	//return 0;
} 
