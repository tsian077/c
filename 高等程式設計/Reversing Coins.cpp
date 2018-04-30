#include<iostream>
#include<sstream>
#include<stdlib.h>
using namespace std;

int main()
{
	string input;
	getline(cin,input);
	istringstream ss(input);
	string token;
	int head=0;
	int tail=0;
	while(getline(ss,token,' '))
	{
		int ans=atoi(token.c_str());
		if(ans==0)
		{
			head++;
		}
		if(ans==1)
		{
			tail++;
		}
	}
	if(head>tail)
	{
		cout<<tail<<endl;
	}
	else
	{
		cout<<head<<endl;
	}
	
} 
