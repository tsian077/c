#include<iostream>
#include<sstream>
#include<string.h>
using namespace std;
int main()
{
string input;
int temp;
int ans=0;
	cin>>input;
	
		for(int i=0;i<input.size();i++)
		{
			temp=input[i]-48;
			ans+=temp;
			
		}
		cout<<ans;
	
	/*while(ans>10)
	{
	
	//	ans=count(input);
		//cout<<ans;
		
	}*/
		
		
		input=ans;
		cout<<input;
	
	
	



return 0;	 
}
