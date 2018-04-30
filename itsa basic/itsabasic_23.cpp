#include<iostream>
#include<string.h>
#include<sstream> 
using namespace std;

int main()
{
	int a[4]={0,0,0,0};
    int coin[3]={0,0,0};
	string input;
	getline(cin,input);
    istringstream delim(input);
    stringstream ss;
    string token;
    int i=0;
    while(getline(delim,token,','))
	{
		ss <<token;
		ss >> a[i];
		ss.clear();
		//cout<<a[i]<<endl;
		i++;
		
	}
    int ans;
    ans=a[0]-((a[1]*15)+(a[2]*20)+(a[3]*30));
    //cout<<ans;
    if(ans<=0)
	{
		cout<<"0"<<endl;
	}
	else
	{
	while(ans>0)
	{
		if(ans>=50)
		{	
			coin[0]=ans/50;
			ans=ans%50;
			//cout<<ans;	
		}
		else if(ans>=5 && ans<50)
		{
			coin[1]=ans/5;
			ans=ans%5;
			
		}
		else if(ans>=1 && ans<5)
		{
			coin[2]=ans/1;
			ans=ans%1;
		}
	}
    cout<<coin[2]<<","<<coin[1]<<","<<coin[0]<<endl;	
	}
    
    return 0;
}
