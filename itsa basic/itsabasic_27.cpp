#include<iostream>
#include<stdlib.h>
using namespace std;
int main()
{
	int r;
	int c[4],b[4];
	int a=0;
	int ans=0;
	bool in=true;
	while(in)
	{
		cin>>ans;
		while(in)
		{
			cin>>a;
		if(a==0)
		{
			in=false;
			break;	
		}	
		r=ans;
		//cout<<"r:"<<r<<" "<<"a:"<<a<<endl;
		int A=0,B=0;
		//取出4個位數的值 
		c[0]=a/1000,a%=1000;
		c[1]=a/100,a%=100;
		c[2]=a/10,a%=10;
		c[3]=a/1;
		//取出亂數的值 
		b[0]=r/1000,r%=1000;
		b[1]=r/100,r%=100;
		b[2]=r/10,r%=10;
		b[3]=r/1;
		for(int i=0;i<4;i++)
			{
				if(c[i]==b[i])
				{
				A++;
				}
				else if(c[i]==b[0] || c[i]==b[1] || c[i]==b[2] || c[i]==b[3] )
				{
				B++;
				
				}
			}
		
			cout<<A<<"A"<<B<<"B"<<endl;
		}
		
			
	}
	
	return 0;
} 

