#include<iostream>
#include<algorithm>
//��reverse��ƪ�������
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
