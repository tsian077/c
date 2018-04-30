#include<iostream>
#include<string>
using namespace std;

int main()
{
	
    string w;
    cin>>w;
    int  n;
    cin>>n;
    int count;
    cin.get();
    for(int i=0;i<n;i++)
    {
    	string ans;
    	//cin>>ans;
    	getline(cin,ans);
        count=0;
        for(int j=0;j<ans.length();j++)
        {
            if(ans[j]==w[count])
            {
                count++;
            }
        }
        if(count==w.length())
        {
            cout<<"true"<<endl;
        }
        else
        {
           	cout<<"false"<<endl;
        }
    }
return 0;
}
