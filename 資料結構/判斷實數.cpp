#include<stdio.h>
#include<iostream>
#include<math.h> 
using namespace std;
int prime(int n);
int main()
{
	int i;
	//找出小於100的質數 
	for(i=3;i<100;i+=2)
	{
		if(prime(i))
			cout<<i<<" ";
	}
		
		system("pause");
}
int prime(int n)
{
	int i,isPrime=1;
	int v=(int)sqrt((double)n);
	for(i=3;i<=v;i+=2)
		if(n%i==0){
			isPrime=0;
			break;
		}
		return isPrime;
		
}
