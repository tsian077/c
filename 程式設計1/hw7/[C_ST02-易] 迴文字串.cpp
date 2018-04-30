#include<iostream>
#include<algorithm>
//用reverse函數直接反轉
using namespace std;

int main()
{
int n;
string ans;
cin>>n;
for(int i=0;i<n;i++)
{
    cin>>ans;
    reverse(ans.begin(),ans.end());
    cout<<ans<<endl;

}



return 0;
}
