#include<iostream>

using namespace std;

int main()
{
	int n10=0,n5=0,n1=0,money=0;
	cin>>money;
	n10=money/10;
	money-=(n10*10);
	n5=money/5;
	money-=(n5*5);
	n1=money/1;
	cout<<"NT10="<<n10<<endl;
	cout<<"NT5="<<n5<<endl;
	cout<<"NT1="<<n1<<endl;
	
	
	return 0;
} 
