#include<iostream>
#include<string>

using namespace std;

int main()
{
	string s;
	while(cin >> s)
	{
		int count =0;
		//眖材蛤程秨﹍ゑ狦妓 COUNT1 
		for(int i=0;i<s.length()/2;i++)
		{
			if(s[i] == s[s.length() -1 - i])
				count++;
			else 
				break;
		}
		//狦count计单计 ゅ 
		if(count == s.length() / 2)
			cout << "YES";
		else
			cout << "NO";
			
		cout<<endl;
	}
	
	
	
//	return 0;
}

