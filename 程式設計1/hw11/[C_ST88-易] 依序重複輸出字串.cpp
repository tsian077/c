#include<iostream>  
  
using namespace std;  
  
int main()  
{  
    string s="";  
    cin>>s;  
    int n=s.size();  
    //cout<<n;  
    for(int i=0;i<n;i++)  
    {  
        cout<<s[i]<<s[i];  
    }  
    cout<<endl;  
      
    return 0;  
}  
