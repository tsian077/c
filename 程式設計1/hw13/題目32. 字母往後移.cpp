#include<iostream>  
using namespace std;  
  
int main()  
{  
      
      
    //主任解法  
     string c;  
     getline(cin,c);  
     int shift;  
     cin>>shift;  
    for(int i=0;i<c.size();i++)  
    {  
        if(c[i]>='A' && c[i]<='Z')  
        {  
            int x= c[i]-'A';  
            x=(x+shift)%26;  
            c[i]=x+'A';  
            cout<<c[i];  
        }  
        else if(c[i]>='a' && c[i]<='z')  
        {  
            int x= c[i]-'a';  
            x=(x+shift)%26;  
            c[i]=x+'a';  
            cout<<c[i];     
        }  
        else if(c[i]>='0' && c[i]<='9')  
        {  
            int x= c[i]-'0';  
            x=(x+shift)%10;  
            c[i]=x+'0';  
            cout<<c[i];     
        }  
        else  
        {  
            cout<<c[i];  
        }  
    }  
        cout<<endl;  
       
      
       
       
      
      
}  
