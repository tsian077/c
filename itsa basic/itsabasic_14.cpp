#include<iostream>
#include<string>

using namespace std;

int main()
{
	string s;
	while(cin >> s)
	{
		int count =0;
		//�q�Ĥ@�Ӹ�̫�@�Ӷ}�l��A�p�G�@�� COUNT�[1 
		for(int i=0;i<s.length()/2;i++)
		{
			if(s[i] == s[s.length() -1 - i])
				count++;
			else 
				break;
		}
		//�p�Gcount�Ƶ���r�ƪ��@�b ���^�� 
		if(count == s.length() / 2)
			cout << "YES";
		else
			cout << "NO";
			
		cout<<endl;
	}
	
	
	
//	return 0;
}

