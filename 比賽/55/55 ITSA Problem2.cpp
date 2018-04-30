#include <iostream>
using namespace std;
int main() 
{
 int n;
 int a,b,c;
 cin>>n;
 for(int i=0;i<n;i++)
 {
  cin>>a>>b>>c;

  for(unsigned int i=0;i<1000000;i++)
  {
   if((((i-a)%7)==0) && (((i+b)%11)==0) && (((i-c)%17)==0))
   {
    cout<<i<<endl;
    break;
   }
  }
 }
  
  
}
