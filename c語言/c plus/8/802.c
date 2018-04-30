#include<stdio.h>
#include<stdlib.h>

int main (){
	int part[5],a=0;
   while(a!=5)
{

	printf("(1)教授\n");
	printf("(2)副教授\n");
	printf("(3)助理教授\n");
	printf("(4)都不是\n");
	printf("(5)結束\n");
	printf("請輸入你得職稱代號\n");
    gets(part);
	a=atoi(part);

	
switch(a){
	
		
		case 1:printf("\n你的職稱是教授\n");
		        break;
		case 2:printf("\n你的職稱是副教授\n");
		break;
		case 3:printf("\n你的職稱是助理教授\n");
		break;
		case 4:printf("\n你的沒有在選項內\n");
		break;
	    /*default: printf("\n你的職稱沒有在這選項內\n");*/ 
		
}	
	
}	
	
	
	
	system("pause");
	return 0;
}
