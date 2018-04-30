#include<iostream>
#include <iomanip>
using namespace std;
double f(double a);
int main()
{
	/*double a;
	cin>>a;
	cout<<fixed<<setprecision(2)
	<<((a+f(a))*1000+0.5)/1000<<endl;*/ 
	
	cout<<setprecision(3)<<23.1111<<endl;
	return 0;
}
double f(double a)
{
     if(a/2<1){
     	return 0;
	 }
	 else return a+f(a/2);
}
