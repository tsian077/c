#include<iostream>
typedef struct date{
	int yy,mm,dd;
}DATE;
typedef struct student
{
	char name[11];
	float weight,height;
	int sex;
	char tel[11],addr[14];
	DATE birth;	
}STUDENT;
STUDENT mary,tom;
using namespace std;

int main()
{
	tom.birth.yy=68;
	tom.birth.mm=10;
	tom.birth.dd=10;
	
	//宣告結構為陣列
	STUDENT s[50],*p;
	s[0].sex=0;
	cout<<s[0].birth.dd;
	//以指標來傳值給結構
	p->sex=0;
	p->height=170.0;
	p->birth.dd=1; 
}
