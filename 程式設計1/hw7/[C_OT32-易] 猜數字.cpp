#include<iostream>

using namespace std;

int main()
{
	
	int ans;
	cin>>ans;
	for(int a=1;a<10;a++)
	{
		for(int b=1;b<10;b++)
		{
			for(int c=1;c<10;c++)
			{
				if(ans==(a*100+c*10+b)+(b*100+a*10+c)+(b*100+c*10+a)+(c*100+a*10+b)+(c*100+b*10+a))
				cout<<a<<b<<c<<endl;
				
			}
		}
	}

	
	
	return 0;
} 
