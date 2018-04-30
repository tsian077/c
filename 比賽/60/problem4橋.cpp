#include<iostream>
#include<string>
#include<sstream>
#include<vector>
#include<cstdlib>
using namespace std;
int gcd(int a, int b);
int main()
{
	vector<string> data1;
	vector<int> data2;
	int S;
	cin >> S;
	while (S > 0)
	{
		S--;
		string data;
		getline(cin, data);
		data1.clear();
		data2.clear();
		stringstream ss(data);
		string token;
		while (getline(ss, token, ','))
		{
			data1.push_back(token);
		}
		for (int i = 0; i < data1.size(); i++)
		{
			stringstream sss(data1[i]);
			string token1;
			while (getline(sss, token1, '/'))
			{
				int aa = atoi(token1.c_str());
				data2.push_back(aa);
			}
		}
		for (int i = 0; i < 3; i++)
		{
			cout << data2[i] << " ";
		}
		/*int bm = arr[3];
		int ab = arr[0];
		int am = arr[1];
		int bb = arr[2];*/
		//int ansb = arr[3]*arr[0] + arr[1]*arr[2];
		//int ansm = arr[1]*arr[3];
		//int div = gcd(ansb, ansm);  //最小公倍數 
		//while (div != 1)
		//{
		//	div = gcd(ansb, ansm);
		//	ansb /= div;
		//	ansm /= div;
		//}
		//cout << ansb << "/" << ansm << endl;
	}
	system("pause");
}
int gcd(int m, int n)
{
	while (n != 0)
	{
		int r = m % n;
		m = n;
		n = r;
	}
	return m;
}
int lcm(int m, int n)
{
	return m * n / gcd(m, n);
}
