#include<iostream>
#include<fstream>
#include<string>
using namespace std;

int main()
{

	ifstream fin("F:\SIC.txt",ios::in);
	const int line_length = 100;
	char str[line_length];
	while(fin.getline(str,line_length))
	{
	cout<<str<<endl;	
    }
    cout<<"¦w¦w";
   
	
	
	system("pause");
	return 0;
}
