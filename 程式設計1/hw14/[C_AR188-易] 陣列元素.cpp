#include<iostream>
#include<sstream>
#include<cstring>
#include<string.h>
#include<stdlib.h>
using namespace std;

int main()
{
	int ans[100000];
	bool n=true;
	int count=0;
	memset(ans,0,sizeof(ans));
	string input;
	getline(cin,input);
	istringstream ss(input);
	string token;
	while(getline(ss,token,' '))
	{
		int temp=atoi(token.c_str());
		ans[temp]++;
		count++;
	}
	
	for(int i=0;i<100000;i++)
	{
		
		if(ans[i]>(count/2))
		{
			cout<<i<<endl;
			n=false;
			break;
		}
	
		
	}
	if(n)
	{
		cout<<"n/a"<<endl;
	}
}
