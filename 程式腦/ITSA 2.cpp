#include<stdio.h>
#include<stdlib.h>

int main ()
{   int a[9];
    int answer=0; 
	printf("��J�A�n���Ʀr:\n");
	for(int i=0;i<9;i++)
	{
		scanf("%d",&a[i]);
	}
	for(int i=0;i<9;i++)
	{
		printf("%d",a[i]);
	}
	answer=(a[0]*a[4]*a[8])+(a[3]*a[7]*a[2])+(a[6]*a[1]*a[5])
	      -(a[2]*a[4]*a[6])-(a[1]*a[3]*a[8])-(a[0]*a[5]*a[7]);
	printf("\n%d",answer);
	return 0;
}
