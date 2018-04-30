#include<stdio.h>
#include<stdlib.h>
#include<iostream>
#include<math.h>
using namespace std;

int main ()
{
	
	int f=0;
	int count=0;
	
		printf("¿é¤J:\n");
		scanf("%d",&f);
	while(f!=-1)	
	{
	
		while(f!=99)
		{
			f=sqrt(f)*10;
			count++;
		}
		scanf("%d",&f);
		
    }
	printf("%d",count);

return 0;
} 
