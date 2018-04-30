#include<iostream>
#include<iomanip>
#include<cmath>
using namespace std;

int main()
{
	
	double chi=0,mat=0,eng=0,all=0;
	int n=0;
	cin>>n;
	double ans[n][4];
	for(int i=0;i<n;i++)
	{
		for(int j=0;j<3;j++)
		{
			cin>>ans[i][j];
		}
	}
	for(int k=0;k<n;k++)
	{
		chi+=ans[k][0];
		eng+=ans[k][1];
		mat+=ans[k][2];
		all+=(ans[k][0]+ans[k][1]+ans[k][2]); 
	}
	all=all/(3*n);
	chi=chi/n;
	mat=mat/n;
	eng=eng/n;
	all=(floor(all*10+0.5))/10;
	eng=(floor(eng*10+0.5))/10;
	mat=(floor(mat*10+0.5))/10;
	chi=(floor(chi*10+0.5))/10;
	cout<<setprecision(1)<<fixed<<all<<" "<<chi<<" "<<eng<<" "<<mat<<endl;
	/*for(int i=0;i<n;i++)
	{
		for(int j=0;j<3;j++)
		{
			cout<<ans[i][j]<<" ";
		}
		cout<<endl; 
	}*/
	
	
	
	//return 0;
}
