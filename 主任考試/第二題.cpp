#include<iostream>

using namespace std;

int main()
{
	string ans;
	int count=0;
	cin>>ans;
	//cout<<ans[0];
	for(int i=0;i<ans.size();i++)
	{
		if(ans[i]=='0')
		{
			i++;
			count++;
		}
		cout<<ans[i]<<" ";
		
	}
	for(int i=1;i<count;i++)
		{
			cout<<"0";
			cout<<" ";  
		}
		cout<<"0"<<endl;
	
}

//請寫一支程式，接受一串的整數。每個整數間用空白隔開，所有的整數都大於等於0。請把這串整數中的0都移到最後
//並且輸出。舉例而言，輸入 為 
