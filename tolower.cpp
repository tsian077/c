/* tolower example */
#include<iostream>
#include<ctype.h>
#include<string>
using namespace std;
int main()
{
	int i=0;
	std::string s1="Test tolower.\n";
	char c;
    
	while(s1[i]!='\n')
	{
		c=s1[i];
		//putchar(tolower(c));
		cout<<c;
		i++;
	}
			
		
	
	return 0;
}
