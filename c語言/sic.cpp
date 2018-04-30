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
	   cout << "檔案無法開啟";
	else
	{
		do
		{
		file.getline(buffer,sizeof(buffer),'\n');//讀取資料放入陣列中
		cout<<buffer<<endl;
		} while(!file.eof());
		file.close();
	}
	//字串讀取
	cout<<"安安"; 
	
	 cout<<buffer;
	
	system("pause");
	return 0;
}
