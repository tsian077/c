#include<iostream>
#include<algorithm>
#include<iomanip>
using namespace std;

int main()
{
	float ans[100];
	for(int i=0;i<10;i++)
	{
		cin>>ans[i];
	}
	sort(ans,ans+10);
	cout<<"maximum:"<<setprecision(2)<<fixed<<ans[9]<<endl;
	cout<<"minimum:"<<setprecision(2)<<fixed<<ans[0]<<endl;
		
	
	
	
	return 0;
}
