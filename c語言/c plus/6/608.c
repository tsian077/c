#include<stdio.h>
#include<stdlib.h>

int main (){
	char str[14]="Apple iPhone 4";
	char sttr[]={'i','p','a','d','\0'};
	char *pstr="Apple iPod";
	
	printf("str�r��p�U:%s\n",str);
	printf("sttr�r��p�U:%s\n",sttr);
	
	printf("pstr�r��p�U:%s\n",pstr);
	
	system("pause");
	return 0;
	
}
