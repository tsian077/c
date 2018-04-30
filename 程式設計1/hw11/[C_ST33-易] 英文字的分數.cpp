#include<iostream>  
#include<string>  
using namespace std;  
  
int main()  
{  
      
    int sum=0;  
    string s;  
    getline(cin, s);  
    for(int i=0;i<s.size();i++)  
    {  
        if (s[i] >= 97)  
            sum += s[i] - 96;  
        else  
            sum += s[i] - 64;  
    }  
    cout << sum<<endl;  
  
    return 0;  
}  
