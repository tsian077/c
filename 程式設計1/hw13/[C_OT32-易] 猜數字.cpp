#include<iostream>

using namespace std;

int main()
{
	bool ans=false;
	int n;
	int a,b,c;
	cin>>n;
	for( a=1;a<10;a++)
	{
		for( b=0;b<10;b++)
		{
			for( c=0;c<10;c++)
			{
				if((100*(a+2*b+2*c))+(10*(2*a+2*c+b)+(2*a+2*b+c))==n)
				{
					ans=true;
					break;
					
				}
				
			}
			if(ans)
			{
				break;
			}
		}
		if(ans)
		{
			break;
		}
	}
	cout<<a<<b<<c;
	
	return 0;
}
