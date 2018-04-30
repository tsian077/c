#include<iostream>
#include<sstream> 
#include<vector>
#include<stdlib.h>
using namespace std;

int main()
{
	int n;
	cin>>n;
	cin.ignore();
	vector <string> temp;
	for(int i=0;i<n;i++) //測資數 
	{
		temp.clear();
		string input; 
		string col,row;  
		getline(cin,input); //取得一整行字串 
		stringstream ss(input);  //丟到stringstream 
		string token;
		while(getline(ss,token,','))  //把col 跟row分開 
		{
			temp.push_back(token);
			
		}
	
		//轉整數 
		int coli =atoi(temp[0].c_str());
		int rowi =atoi(temp[1].c_str());
		
		//解決10轉2 
		string ctemp[10];
		string rtemp[10];
		int cnum=0;
		int rnum=0;
		while(coli/2!=1)
		{
			ctemp[cnum]=(coli%2)+'0';
			coli/=2;
			cnum++;
		}
		
		ctemp[cnum]=coli%2+'0';
		ctemp[cnum+1]=coli/2+'0';
		cnum+=2;
		for(int i=cnum-1;i>=0;i--)
		{
			cout<<ctemp[i];
		}
		cout<<endl;
		while(rowi/2!=1)
		{
			rtemp[rnum]=(rowi%2)+'0';
			rowi/=2;
			rnum++;
		}
		
		rtemp[rnum]=rowi%2+'0';
		rtemp[rnum+1]=rowi/2+'0';
		rnum+=2;
		for(int i=rnum-1;i>=0;i--)
		{
			cout<<rtemp[i];
		}
		string ans;
		for(int i=0;i<rnum;i++)
		{
			ans=rnum[i]+cnum[i];
		}
		
		
		
		
	}
	
	
	
	
	
} 
