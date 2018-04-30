#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int main (){
	char str[]="Apple iPhone 4";
	char pstr2[20]="Apple";
	char pstr1[]="ipod";
	char str3[20];
	
	
	printf("str字串的長度是%d\n",strlen(str));
	printf("pstr2連結pstr1的字串為:%s\n",strcat(pstr2,pstr1));
	printf("str3字串如下:%s\n",strcpy(str3,pstr1));
	
	system("pause");
	return 0;
}
