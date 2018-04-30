#include<iostream>  
#include<map>  
using namespace std;  
  
int main()  
{  
    int n;  
    cin>>n;  
    for(int i=1;i<=n;i++)  
    {  
        for(int k=n;k>i;k--)  
        {  
            cout<<" ";  
        }  
        if(i%2==0)  
        {  
            for(int a=i;a>=1;a--)  
            {  
                cout<<a;  
            }  
        }  
        else  
        {  
            for(int j=1;j<=i;j++)  
        {  
            cout<<j;  
        }  
        }  
          
        cout<<endl;  
    }  
      
    return 0;  
}  
