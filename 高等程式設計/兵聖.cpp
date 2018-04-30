#include<iostream>
#include<string>
#include<sstream>
using namespace std;

int main()
{
	string ans[3][5]={{" "," "," "," "," "},
					  {" "," "," ","Staff","General"},
	                  {" "," "," ","execute by shooting","Soldier"}};
	string str;
	string str2;
	int n;
	cin>>n;
	cin.get();
	for(int i=0;i<n;i++)
	{
	int x,y;
	getline(cin,str);
	x=str[str.length()-3];
	y=str[str.length()-1];
	istringstream delim(str);
	getline(delim,str,' ');
	cout<<str<<" ";
	x=x-48;
	y=y-48;
	cout<<ans[x][y]<<endl;
	}
	
	
	return 0;
}
