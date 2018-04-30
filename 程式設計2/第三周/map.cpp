#include<iostream>
#include<map>
#include<vector>
#include<string>
using namespace std;

int main()
{
	map<char,int> buf;
	buf.insert(make_pair('W',1));
	if(buf.find('W') != buf.end())
	{
		cout<<"find";
	}
	else
	{
		cout<<"no";
	}
	//找到W的頻率 
	cout<<buf['W']<<endl;
	
	
	
	//一個字串每個字母的頻率
	string s;
	getline(cin,s);
	map<char,int> buff;
	for(int i=0;i<s.length();i++)
	{
		//如果字元沒在buf中 
		if(buff.find(s[i]) == buff.end())
		{
			//新增 
			buff.insert(make_pair(s[i],1));		
		}
		else //如果有出現 
		{
			//頻率+1 
			buf[s[i]]++;
		}
	} 
	int max;
	char maxchar;
	for(map<char,int>::iterator iter=buff.begin();iter!=buff.end();iter++)
	{
		if(iter->second > max)
		{
			max=iter->second;
			maxchar=iter->first;
		}
	}
	
	
}
