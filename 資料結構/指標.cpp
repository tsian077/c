#include<stdio.h>

int main()
{
	int *p;
	int a[10];
	//宣告a[0]的位置給指標 
	p=&a[0];
	//將指標指向a的下一個位址並把迴圈i的值丟給指標 
	for(int i=0;i<10;i++)
	{
		*p=i;
		p++;
	}
	for(int i=0;i<10;i++)
	{
		printf("%d\n",a[i]);
	}
	
	return 0;
} 
