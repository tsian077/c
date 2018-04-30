#include<iostream>  
using namespace std;  
  
int main()  
{  
    int m=0;  
    int n=0;  
    int ans=0;  
    cin>>m;  
    for(int i=0;i<m;i++)  
    {  
        ans=0;  
        cin>>n;  
        for(int i=1;i<=n;i++)  
        {  
            if(i%3==0)  
            {  
                ans+=i;  
            }  
        }  
        cout<<ans<<endl;  
          
    }  
      
      
      
    return 0;  
}  
