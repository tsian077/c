#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int main (){
	char str[]="Apple iPhone 4";
	char pstr2[20]="Apple";
	char pstr1[]="ipod";
	char str3[20];
	
	
	printf("str�r�ꪺ���׬O%d\n",strlen(str));
	printf("pstr2�s��pstr1���r�ꬰ:%s\n",strcat(pstr2,pstr1));
	printf("str3�r��p�U:%s\n",strcpy(str3,pstr1));
	
	system("pause");
	return 0;
}
