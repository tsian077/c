#include<iostream>
#include<string>

using namespace std;

int main()
{
	string s;
	while(cin >> s)
	{
		int count =0;
		//從第一個跟最後一個開始比，如果一樣 COUNT加1 
		for(int i=0;i<s.length()/2;i++)
		{
			if(s[i] == s[s.length() -1 - i])
				count++;
			else 
				break;
		}
		//如果count數等於字數的一半 為回文 
		if(count == s.length() / 2)
			cout << "YES";
		else
			cout << "NO";
			
		cout<<endl;
	}
	
	
	
//	return 0;
}

