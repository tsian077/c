#include<iostream>
#include<sstream>
#include<algorithm>
#include<vector>
using namespace std;

int main()
{
	vector <string> ans; 
	string a;
	string b;
	getline(cin,a);
	getline(cin,b);
	stringstream aa(a);
	stringstream bb(b); 
	string str;
	while(getline(aa,str,','))
	{
		ans.push_back(str);
	
		
	}
	while(getline(bb,str,','))
	{
		ans.push_back(str);
	
	}
	
	vector <int> ans2;
	for(int i=0;i<ans.size();i++)
	{
		ans2.push_back(atoi(ans[i].c_str()));
	}
	sort(ans2.begin(),ans2.end());
	ans2.erase(unique(ans2.begin(), ans2.end()), ans2.end());
	for(int i=0;i<ans2.size()-1;i++)
	{
		cout<<ans2[i]<<" ";
	}
	cout<<ans2[ans2.size()-1]<<endl;
	
	
	
	
	
	
	
}
