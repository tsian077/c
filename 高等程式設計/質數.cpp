#include<iostream>  
  
using namespace std;  
  
int main()  
{  
int n=0,ans=0;  
cin>>n;  
int prime=true;  
while(n!=0)  
    {  
        cin>>ans;  
        int j=ans;  
        for(int i=2;i<j/2;i++)  
        {  
            if(ans%i==0)  
            {  
                prime=false;  
                break;  
            }  
  
  
        }  
        if(prime)  
            {  
                cout<<ans<<endl;  
            }  
  
        prime=true;  
        n--;  
    }  
  
}  
