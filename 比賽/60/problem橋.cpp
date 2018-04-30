#include<iostream>
#include<string>
using namespace std;
int main()
{
	int num;
	cin >> num;
	cin.ignore();
	while (num>0)
	{
		num--;
		string s;
		
		getline(cin,s);
		for (int i=s.size()-1;i>=0;i--)
		{
			cout << s[i];
		}
	}
    return 0;
}
