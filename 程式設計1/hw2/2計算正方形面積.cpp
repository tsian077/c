#include<iostream>  
#include<cmath>  
#include<iomanip>  
using namespace std;  
  
  
int main()  
{  
    float s;  
    cin>>s;  
    s= s*s; //正方型面積 //552.252827  
    //計算小數點，先乘10    
    s=s*10;   //5522.52827  
    //加0.5進位   
    s=s+0.5;  //5523.02827  
    s=floor(s);  //5523.00000  
    //在除10   
    s=s/10;  
    cout<<fixed<<setprecision(1)<<s<<endl;  
      
    return 0;  
} 
