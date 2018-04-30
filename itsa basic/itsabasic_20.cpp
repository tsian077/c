#include<iostream>
using namespace std;

int main()
{
	int i, j, t, ten; 
	string s1, s2, s; 
	string num = "0123456789"; 
	cout << "輸入No.1字串："; 
	cin >> s1; 
	cout<< "輸入No.2字串："; 
	cin >> s2; 
	i = s1.size()-1; 
	j = s2.size()-1; 
	ten = 0; 
	while( i >= 0 || j >= 0 ) 
	{ 
		if( i >= 0 && j >= 0 ) 
		t = s1[i] - '0' + s2[j] - '0' + ten; 
		else if( i >= 0 ) 
		t = s1[i] - '0' + ten; 
		else if( j >= 0 ) 
		t = s2[j] - '0' + ten; 
		ten = 0; 
		while( t >= 10 )
	 	{ 
			ten++; 
			t -= 10; 
		} 
		s = num[t] + s; 
		i--; 
		j--; 
	} 
	if( ten > 0 ) 
	s = num[ten] + s; 
	cout << "大數相加結果：" << s << endl; 
	return 0;
} 

