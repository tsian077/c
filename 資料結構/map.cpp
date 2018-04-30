#include<iostream>
#include<string>
#include<map>
using namespace std;
typedef pair<string,int> PAIR;

ostream & operator<<(ostream& out,const PAIR& p)
{
	return out<<p.first<<" "<<p.second;
}
int main()
{
	map<string,int> name_score;
	name_score.insert(make_pair("5123",11));
	name_score.insert(make_pair("1111",4));
	for(map<string,int>::iterator iter = name_score.begin();iter!=name_score.end();++iter)
	{
		cout<<*iter<<endl;
	}
	
	return 0;
}
