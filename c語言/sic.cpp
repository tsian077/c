#include<iostream>
#include<fstream>
#include<string>
using namespace std;

int main()
{
	fstream file;

	char buffer[23];
	file.open("F:\SIC.txt",ios::in);
	if(!file)
	   cout << "�ɮ׵L�k�}��";
	else
	{
		do
		{
		file.getline(buffer,sizeof(buffer),'\n');//Ū����Ʃ�J�}�C��
		cout<<buffer<<endl;
		} while(!file.eof());
		file.close();
	}
	//�r��Ū��
	cout<<"�w�w"; 
	
	 cout<<buffer;
	
	system("pause");
	return 0;
}
