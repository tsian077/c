#include<iostream>
#include<fstream>
//#include<iostream>
//#include<fstream>
using namespace std;

int main()
{
	fstream file;
	char buffer[200];
	file.open("F:\SIC.txt",ios::in);
	if(!file)
	   cout << "�ɮ׵L�k�}��";
	eles
	{
		file.read(buffer,sizeof(buffer));//Ū��������ƨé�Jbuffer�}�C��
		cout<<buffer<<"\n";
		file.close(); 
		
	}
	
	system("pause");
	return 0;
}
