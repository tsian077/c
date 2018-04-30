#define NTRATE 31.34;

#include<stdio.h>
#include<stdlib.h>

int main (){
	
	double USdollar,NTdollar;
	printf("請輸入您有多少美金:");
	scanf("%lf",&USdollar);
	
	NTdollar=USdollar*NTRATE;
	printf("您可以換%.2lf台幣\n",NTdollar);
	
	system("pause");
	return 0;
} 
