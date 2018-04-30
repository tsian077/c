#include<iostream>
#include<iomanip>
#include<math.h>
using namespace std;

int main()
{
	for(int i=0;;i++)
	{
		double wei=0,hei=0,year=0;
	double ha=0,clo=0,pan=0;
	cin>>hei>>wei>>year;
	if(year>28)
	{
		pan=wei*0.4;
		for(int i=0;i<floor(((year-28)/2));i++)
		{
			//cout<<"®w";
			pan+=0.25;
		}
	}
	else
	{
		pan=wei*0.4;
	}
	
	if(year>30)
	{
		clo=(hei*wei)/634.4;
		for(int i=0;i<floor(((year-30)/5));i++)
		{
			//cout<<"¦ç"; 
			clo+=0.15;
		}
	}
	else
	{
		clo=(hei*wei)/634.4;
	}
	ha=(wei/hei)*41.2;
	
	
	cout<<fixed<<setprecision(2)<<ha<<" "<<clo<<" "<<pan<<endl;
	int a;
	cin>>a;
	if(a==-1)
	{
		break;
	}
	
	}
	
	
	
}
