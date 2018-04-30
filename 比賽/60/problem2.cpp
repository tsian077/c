#include<iostream>
#include<algorithm>
#include<string>
using namespace std;

int main()
{
	int n;
	cin>>n;
	cin.ignore();
	for(int i=0;i<n;i++)
	{
		string input;
		getline(cin,input);
		for(int i=input.size()-1;i>=0;i--)
		{
			cout<<input[i];
		}
		cout<<endl;
	}
}
