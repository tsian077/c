#include<stdio.h>
#include<stdlib.h>

int main () {
	char string[20];
	double output;
	printf("�п�J�@�Ʀr���r��:");
	scanf("%s",&string);
	
	output=atof(string);
	
	printf("%s�ഫ�᪺�B�I�Ƭ�%lf\n",string,output);
	
	system("pause");
	return 0;
	
}
