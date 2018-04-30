#include<iostream>

using namespace std;

int main()
{
	int a=0;
    int ans[100];
    int count=0;
    int count2=0;
    cin>>a;
    if(a>0)
{
	
    while(a>=1)
	{
	 ans[count]=a%2;
	 a=a/2;	
	count++;
	} 
	for(int i=0;i<count;i++){
		if(ans[i]==1){
			count2++;
		}
	}
	cout<<"The number of bits is ";
	cout<<count2;
	cout<<"."<<endl;
}
  
}
