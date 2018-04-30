#include<iostream>

using namespace std;

int main()
{
	int a=0,b=0,q=0,r=0;
	cin>>a>>b;

	cout<<a<<"+"<<b<<"="<<a+b<<endl;
	cout<<a<<"*"<<b<<"="<<a*b<<endl;
	cout<<a<<"-"<<b<<"="<<a-b<<endl;
	
	r=a%b;
	if(r>=0)
	{
		cout<<a<<"/"<<b<<"="<<a/b<<"..."<<r<<endl;
	}
	if(r<0)
	{
		q=a/b;
		if(q<0)
		{
			q-=1;
		}
		else
			q+=1;
			
		r=a-b*q;
		cout<<a<<"/"<<b<<"="<<q<<"..."<<r<<endl;
	}
	
	
	
	
}
