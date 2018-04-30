#include<iostream>

using namespace std;

int main(){
	int a1=0,a2=0;
	cin>>a1>>a2;
	if(a1==0 || a2==0)
	{
		cout<<"no answer"<<endl;
		a1=0;a2=0;
	}
	for(int i=0;i<a2;i++)
	{
		for(int i=0;i<a1;i++)
		{
			cout<<"*";
		}
		cout<<endl;
	}
	
	
	
}
