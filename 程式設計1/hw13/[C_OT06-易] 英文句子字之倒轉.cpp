#include<iostream>
#include<string>
#include<sstream>
using namespace std;

int main()
{
	int i=0;
	string temp[100];
	string mstring;
	getline(cin,mstring);
	stringstream ss(mstring);
	string token;
	while(getline(ss,token,' '))
	{
		
		temp[i]=token;
		i++;
	}
	for(int j=i-1;j>0;j--)
	{
		cout<<temp[j]<<" ";
	}
	cout<<temp[0]<<endl;
}
