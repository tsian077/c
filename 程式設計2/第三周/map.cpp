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
	//���W���W�v 
	cout<<buf['W']<<endl;
	
	
	
	//�@�Ӧr��C�Ӧr�����W�v
	string s;
	getline(cin,s);
	map<char,int> buff;
	for(int i=0;i<s.length();i++)
	{
		//�p�G�r���S�bbuf�� 
		if(buff.find(s[i]) == buff.end())
		{
			//�s�W 
			buff.insert(make_pair(s[i],1));		
		}
		else //�p�G���X�{ 
		{
			//�W�v+1 
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
