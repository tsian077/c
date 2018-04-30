#include<iostream>
#include<fstream>
using namespace std;

#define SIZE 1000
char buffer[SIZE];

int main ()
{
	fstream file;
	file.open("F:\SIC.txt",ios::in);
    if(!file)
         cout<<"檔案無法開啟\n"; 
	else
	{
		file.read(buffer,sizeof(buffer));
		cout<< buffer<<"\n";
		file.close();
	}
	printf("%c",buffer[0]);
	
	system("pause");
	return 0;
}
