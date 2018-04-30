#include<iostream>

#include<map>
using namespace std;

int main()
{
	string s;
	string p;
	int a,b=0;
	int fpos;
	cin>>s;
	cin>>p;
	for(int i=0;i<4;i++)
	{
		fpos = s.find(p[i], fpos);
		cout<<fpos<<endl;
		if(fpos!=-1)
		{
			b++;	
		}
		else if(fpos==i)
		{
			
			a++;
		}
	}
	cout<<a<<"A "<<b<<"B ";	
		
	
	
}
