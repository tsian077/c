#include<iostream>

using namespace std;

int main()
{
	int h1=0,m1=0,h2=0,m2=0,total=0,money=0;
	cin>>h1>>m1;
	cin>>h2>>m2;
	total=((h2*60)+m2)-((h1*60)+m1);
	if(total<=120)
	{
		money=(total/30)*30;
	}
	if(total>120 && total<=240)
	{
		money+=120;
		total-=120;
		money+=(total/30)*40;
		
	}
	if(total>240)
	{
		money+=280;
		total-=240;
		money+=(total/30)*60;
	}
	cout<<money<<endl;
	
	
	return 0;
}
