#include<stdio.h>
#include<stdlib.h>
#include<math.h>
int prime(int n);


int main()
{
	int i;
	for(i=3;i<100;i+=2)
	 if(prime(i))  //�p�Gi�O�ȼơA�h��X
	     printf("%d\t",i); 
	
	return 0;
} 
int prime(int n)
{
	int isPrime=1,i;
	int v=(int)sqrt((double)n);
	for(i=3;i<=v;i+=2){
		if (n%i==0)
		{
			isPrime==0;
			break;
		}
	}
	
}
