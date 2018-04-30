#include<iostream>

using namespace std;

int main()
{
	string ans;
	cin>>ans;
	for(int i=0;i<ans.size();i++)
	{
		/*if(ans[i]==0 || ans[i]==1 || ans[i]==2 || ans[i]==3 || ans[i]==4 || ans[i]==5 || ans[i]==6 || ans[i]==7 || ans[i]==8 || ans[i]==9)
		{
			
		}*/
		if((int)ans[i]>=97 || (int)ans[i]<=122)
		{
			ans[i]=ans[i]+32;
			
		}
		if((int)ans[i]>=65 || (int)ans[i]<=96)
		{
			
			ans[i]=ans[i]-32;
			
		}
		
	}
	
	cout<<ans;
}

//輸入一個字串，將字串中的大寫改小寫，小寫改大寫，並且移除字串中的數字 
