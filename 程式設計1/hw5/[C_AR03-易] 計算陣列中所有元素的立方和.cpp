#include<iostream>
#include<stdio.h>
#include<string.h> 
using namespace std;

int main()
{
	int input[6];
	memset(input,0,sizeof(input));
	
	int sum=0;
	for(int i=0;i<6;i++)
	{
		cin>>input[i];
		sum+=input[i]*input[i]*input[i];
	}
	cout<<sum;
	
	
} 
