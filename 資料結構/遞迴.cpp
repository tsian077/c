#include<iostream>

using namespace std;
int f(int a)
{
	if(a<1) return 1;
	if(a<2) return 1;
	return f(a-1)+f(a-2);
	
}
int main()
{
	int a;
	
	while(cin>>a)
	{
	cout<<f(a)<<endl;	
	}
	
	
	return 0;
}
 
