#include<stdio.h>
#include<stdlib.h>

int main ()
{
	int part[5],i=0;
	
while(i!=5)
{
	
	
	printf("(1)教授\n(2)副教授\n(3)助理教授\n(4)都不是\n(5)結束\n");
	printf("請輸入你的職稱代號");
    
	gets(part);
	i=atoi(part);
	
switch(i)
{
		case 1:printf("你的職稱是教授");break;
	    case 2:printf("你的職稱是教授");break;
	    case 3:printf("你的職稱是教授");break;
	  default : printf("你的職稱沒又在這些選項內");
}
}
	
	system("pause");
	return 0;
}
