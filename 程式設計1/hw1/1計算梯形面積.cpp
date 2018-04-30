#include<iostream>
#include<iomanip>
using namespace std;

int main()
{
	float u,d,h;
	cin>>u>>d>>h;
	cout<<"Trapezoid area:"<<fixed<<setprecision(1)<<(u+d)*h/2<<endl;
	
	return 0;
}
