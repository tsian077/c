#include<iostream>
#include<string>
#include<sstream>
#include<algorithm>
#include<map>
#include<set>
using namespace std;
typedef pair<int, string> PAIR;
/*ostream& operator<<(ostream& out,const PAIR& p)
{
	return out<<p.second<<" ";
}
/*struct CmpByValue
{
	bool operator()(const PAIR& lhs, const PAIR& rhs)
	{
		return lhs.second < rhs.second;
	}
};*/
int main()
{	
	multimap<int, string > std;
	
	int n=0;
	string input;
	cin>>n;
	cin.get();
	getline(cin,input);
	istringstream delim(input);
	string token;
	int a;
	while(getline(delim,token,' '))
	{
	
		for(int i=0;i<token.size();i++)
		{
		 a+=(token[i]-'0');
		}
		
		std.insert(make_pair(a,token));
		a=0;
		
	}
	for(map<int,string>::iterator iter =std.begin();iter!=std.end();++iter)
	{
		cout<<*iter;
	}
	cout<<endl;
	//return 0;
} 
