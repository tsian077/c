#include<stdio.h>
#include<stdlib.h>

int main (){
	
	char str1[]="iPhone 4";
	char str2[40]="Apple iPod";
	char str3[40]="Apple";
	char str4[40];
	
	strncat(str3,str1,6);
	strncpy(str4,(str2+6),5);
	
	printf("%s\n",str3);
	printf("%s\n",str4);
	
	system("pause");
	return 0;
}
