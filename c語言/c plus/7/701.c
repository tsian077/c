#include<stdio.h>
#include<stdlib.h>

int main () {
	char string[20];
	double output;
	printf("請輸入一數字的字串:");
	scanf("%s",&string);
	
	output=atof(string);
	
	printf("%s轉換後的浮點數為%lf\n",string,output);
	
	system("pause");
	return 0;
	
}
