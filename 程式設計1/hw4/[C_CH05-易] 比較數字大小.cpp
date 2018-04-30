#include<iostream>
#include<algorithm>
using namespace std;

int main()
{
	int a[3];
	for(int i=0;i<=2;i++)
	{
		cin>>a[i];
	}
	sort(a,a+3);
	/*for(int i=0;i<=2;i++)
	{
		cout<<a[i];
	}*/
	cout<<a[2]<<">"<<a[1]<<">"<<a[0]<<endl;
	
	
	return 0;
}
