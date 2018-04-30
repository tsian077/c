#include<iostream>
struct student{
	char name[11];
	float weight,height;
	int sex;
	char tel[11],addr[41];
};
using namespace std;

int main()
{
	struct student mar,tom;
	tom.sex=1;
	cout<<tom.sex;
	
	
	return 0;
}
