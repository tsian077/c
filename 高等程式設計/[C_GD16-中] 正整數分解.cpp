#include<iostream>

using namespace std;
int f(int n,int k)
{
	if(n==k || n< 2*k)
	{
		return 1;
	}
	else
	{
		int num=0;
		for(int i=k;i<n;i++)
		{
			if(n-i >= i)
			{
				num=num+f(n-i,i);
			}
		}
		return num+1;
	}
	
}
/*
n=6
			       [6,1]
			       
		[5,1]      [4,2]     [3,3]
		
	 [4,1] [3,2]   [3,3]
	 
  [3,1][4,2]
  
[2,1]

[1,1]

*/
int main()
{
	int n=0;
	while(cin>>n)
	{
		f(n,1);
		//cout<<f(n,1)<<endl;
	}
}


