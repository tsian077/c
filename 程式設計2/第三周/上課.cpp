#include<iostream>
#include<set> 
using namespace std;

int main()
{
	//�ŧi�@��set �A�̭��C�j�������O��� 
	set<int> c;
	
	//�ŧi�@��set�A �̭����O���I�� 
	set<double> x; 
	
	
	//�s�W���� 
	c.insert(5);
	c.insert(10);
	c.insert(5);
	
	//�R������ 
	c.erase(5);
	
	//�M���Ҧ� 
	c.clear();
	
	//�p��X�{�X�� 
	c.count(5);
	
	//��X���� 
	c.find(5);
	//C++ 11����~����
	/*set<int> M={1,2,2,5}; 
	for(int v : M)
	{
		cout<<v<<endl;
	}*/
	
	//it�i�����T�� �L���W�٬��^�N�� �̪��begin �u�n�٨S����end() �N���|���� 
	//for(set<int>::iterator it = buf.begin(); it!=buf.end(); it++)
	for(set<int>::iterator it = c.begin(); it!=c.end(); it++)
	{
		cout<<*it<<endl;
	}
	
	return 0;
}
