#include<iostream>
#include<string.h>
using namespace std;

int main(){
	string sub;
	int count=0;
	int pos;
	string input;
	cin>>sub;
	cin>>input;
	for(int i=0;i<input.size();i++)
	{
		pos=i;
		pos=input.find(sub,pos);
		if(pos!=string::npos)
		{
			count++;
			i=pos;
			
		}
	}
	cout<<count<<endl;
} 
