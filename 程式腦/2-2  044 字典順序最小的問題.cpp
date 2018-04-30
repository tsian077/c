#include<iostream> 
#include<stdio.h>
#include<stdlib.h> 

int N=6;
char S[7]="ACCBEB";
using namespace std;
/*void solve()
{
	int a = 0,b=N-1;
	while(a <= b)
	{
		bool left = false;
		for(int i=0;a+i<=b;i++)\
		{
			if(S[a+i]<S[b-i]){
				left = true;
				break;
			}
			else if (S[a+i]>S[b-i]){
				left = false;
				break;
			}
		}
		if(left)putchar(S[a++]);
		else putchar(S[b--]);
	}
}*/


int main()
{
int a = 0,b=N-1;
	while(a <= b)
	{
		bool left = false;
		for(int i=0;a+i<=b;i++)\
		{
			if(S[a+i]<S[b-i]){
				left = true;
				break;
			}
			else if (S[a+i]>S[b-i]){
				left = false;
				break;
			}
		}
		if(left){
		putchar(S[a++]);
		}
		else putchar(S[b--]);
	}


	putchar('\n');
	return 0;
}
