#include<stdio.h>
#include<stdlib.h>

int main ()
{   int c[5];
	int i,j;
	for(i=0;i<6;i++)
	{
		scanf("%d",&c[i]);
	}
	
	for(i=0;i<6;i++)
	{
		printf("%d",c[5-i]);
	}
	system("pause");
	return 0;
} 
