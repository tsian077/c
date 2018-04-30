#include<iostream>
#define max 10
using namespace std;

int main ()
{
	int n;
	int m;
	char a[max+1];
	int  b[max+1];
	cin>>n;
for(int i=0;i<n;i++)
{
	cin>>m;
 for(int i=0;i<m;i++)
 {
 	cin>>a[i]>>b[i];
 }
}
for(int i=0;i<m;i++)
 {
 	if(b[i]+b[i+1]>b[i+2])
	 {
	 	cout<<a[i]<<a[i+1]<<a[i+2]<<endl;
	 }
		
}

	
}
