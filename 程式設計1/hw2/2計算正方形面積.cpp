#include<iostream>  
#include<cmath>  
#include<iomanip>  
using namespace std;  
  
  
int main()  
{  
    float s;  
    cin>>s;  
    s= s*s; //���諬���n //552.252827  
    //�p��p���I�A����10    
    s=s*10;   //5522.52827  
    //�[0.5�i��   
    s=s+0.5;  //5523.02827  
    s=floor(s);  //5523.00000  
    //�b��10   
    s=s/10;  
    cout<<fixed<<setprecision(1)<<s<<endl;  
      
    return 0;  
} 
