#include<iostream>
#include<sstream>
#include<string>
#include<vector>
#include<algorithm>
using namespace std;
int main()
{
	int num = 2;
	while (num > 0)
	{
		num--;
		string s1, s2;
		cin >> s1 >> s2;
		stringstream ss1(s1);
		stringstream ss2(s2);
		vector<string> buf;
		string arr;
		while (getline(ss1, arr, ','))
		{
			buf.push_back(arr);
		}
		while (getline(ss2, arr, ','))
		{
			buf.push_back(arr);
		}
		//�����}�C�����Ƥ���(earse���\��O?�����w�S??���Ҧ���?)unique?��?�����`����������̦Z
		buf.erase(unique(buf.begin(), buf.end()), buf.end());
		
		sort(buf.begin(), buf.end());
		for (int i = 0; i < buf.size(); i++)
		{
			if (i==buf.size()-1)
			{
				cout << buf[i] << endl;
			}
			else
			{
				cout << buf[i] << " ";
			}
		}
		return 0;
	}
}
