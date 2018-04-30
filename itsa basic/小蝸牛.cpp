#include<iostream>
#include<string>
using namespace std;

int main()
{
 float n,r,d=0;
 float count=0;
 string nc;
 string rc;
 string dc;
 cin>>n>>nc;
 cin>>r>>rc;
 cin>>d>>dc;
if(nc=="m")
 {
  n=n*100;
  
 }
if(rc=="m")
{
   r=r*100;
   
}
if(dc=="m")
{
    d=d*100;
}

 while(n!=0)
 {
  n=n-r;
  if(n<=0)
  {
   
   break;
  }
  n=n+d;
  count++;
 }
 cout<<(count+1)<<endl;
 //system("pause");
}
