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
	   cout << "檔案無法開啟";
	eles
	{
		file.read(buffer,sizeof(buffer));//讀取全部資料並放入buffer陣列中
		cout<<buffer<<"\n";
		file.close(); 
		
	}
	
	system("pause");
	return 0;
}
