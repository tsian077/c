#include<stdio.h>
#include<stdlib.h>

int main ()
{
	int x[4]={1,2,3};
	int i=0;
	int s=x[i];
	printf("x=%d i=%d  s=%d\n",x[0],i,s);
	s=x[i+1];
	printf("x=%d i=%d  s=%d\n",x[1],i,s);
	s=x[i+1];
    printf("x=%d i=%d  s=%d\n",x[2],i,s);
	s=x[i+1];
    printf("x=%d i=%d  s=%d\n",x[2],i,s);
	return 0;
}
