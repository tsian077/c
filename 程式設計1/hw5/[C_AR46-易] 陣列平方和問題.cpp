#include<iostream>
#include<iomanip>

using namespace std;

int main()
{
	double sum;
	while(true)
	{
		double input;
		cin>>input;
		sum+=(input*input);
		char c;
		cin.get(c);
		
		if(c=='\n')
		{
			break;
		}
	} 
	cout<<setprecision(6)<<fixed<<sum<<endl;
	

} 
