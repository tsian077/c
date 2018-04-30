#include<iostream>
#include<sstream>
#include<cstring>
#include<stdlib.h>
#include<vector>
using namespace std;

int main()
{
	int n;
	vector<int> ans;
	cin>>n;
	cin.ignore();
	string input;
	getline(cin,input);
	istringstream ss(input);
	string token;
	while(getline(ss,token,' '))
	{
		int temp;
		temp=atoi(token.c_str());
		ans.push_back(temp);
	}
	for(int i=0;i<ans.size()-(n-1);i++)
	{
		int max=0;
		for(int j=i;j<i+n;j++)
		{
			if(ans[j]>max)
			{
				max=ans[j];
			}
		}
		cout<<max<<endl;
	}
	
}
