#include<stdio.h>
#include<stdlib.h>

int main ()
{
	int a=9,b=7,c=2;
	int t;
	
	if(b<a)
	{
		t=b;
		b=a;
		a=t;
	}
	if(c<a)
	{
		t=c;
		c=a;
		a=t;
	}
	if(c<b)
	{
		t=c;
	    c=b;
		b=t;
	}
	printf("%d  %d  %d",a,b,c);
	system("pause");
	return 0;
	
} 
