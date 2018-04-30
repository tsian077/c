#include<iostream>
#include<sstream>
#include<cstring>
#include<stdlib.h>
#include<iomanip>
using namespace std;

int main()
{
	
	string input;
	while(getline(cin,input))
	{
		
		double sum=0;
		int count=0;
		istringstream ss(input);
		string token;
		while(getline(ss,token,' '))
		{
		
		int tem;
		tem=atoi(token.c_str());
		sum +=tem;
		count++;
		
		}
		cout<<"Size: "<<count<<endl;
		cout<<"Average: "<<fixed<<setprecision(3)<<sum/count<<endl;	
	}
	
	
	

}
