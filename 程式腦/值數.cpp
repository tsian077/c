#include<iomanip>
#include<iostream>
using namespace std;
int main()
{
	int a;
	bool p=true;
	cin>> a;
	for(int i=2;i<a;i++){
		cout<<"°£¬°:"<<a%i<<endl; 
		cout<<p;
		if(a%i==0)
		{
			
			p=0;
			break;
		}
		if(a%i==1){
			
			p=1;
			break;
		}
	}
	if(p=1)
	{
		cout<<"Yes"<<endl;
	}
	else
	{
		cout<<"No"<<endl;
	}
}
