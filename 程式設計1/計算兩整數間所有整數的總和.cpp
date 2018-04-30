#include<iostream>    
using namespace std;  
  
int main()  
{  
int a1,a2,ans=0,t;  
cin>>a1>>a2;  
if(a1>a2){  
    t=a1;  
    a1=a2;  
    a2=t;  
}  
for(int i=a1;i<=a2;i++)  
{  
    ans+=i;  
}  
cout<<ans<<endl;  
  
return 0;  
}  
