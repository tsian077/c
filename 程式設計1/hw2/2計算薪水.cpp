#include<iostream>
#include<iomanip>
using namespace std;

int main()
{
	int work=0;
	double money=0.0,total=0.0;
	cin>>work>>money;
	if(work<=60)
	{
		total=money*work;
	}
	if(work>60 && work<=120)
	{
		total+=60*money;
		work-=60;
		total+=work*money*1.33;
	}
	if(work>120)
	{
		total+=60*money;
		total+=60*money*1.33;
		work-=120;
		total+=work*money*1.66;
	}
	
	cout<<fixed<<setprecision(1)<<total<<endl;
	return 0;
}
