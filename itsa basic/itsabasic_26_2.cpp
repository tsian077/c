#include<iostream>
#include<string>
#include<sstream>
#include<algorithm>
#include<map>
#include<set> 
using namespace std;
bool cmp(const pair<int,string>& a,const pair<int,string>& b)
{
	return a.second < b.second;
}
int main()
{	
	multimap<int, set<string> > std;
	
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
	for(auto&& x : std)
	{
		std::cout<<x.first <<" "<<x.second <<std::endl;
	}
	
	/*for(map<int,string>::iterator iter =std.begin();iter!=std.end();++iter)
	{
		cout<<*iter;
	}*/
	cout<<endl;
	//return 0;
} 
