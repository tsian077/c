#define NTRATE 31.34;

#include<stdio.h>
#include<stdlib.h>

int main (){
	
	double USdollar,NTdollar;
	printf("�п�J�z���h�֬���:");
	scanf("%lf",&USdollar);
	
	NTdollar=USdollar*NTRATE;
	printf("�z�i�H��%.2lf�x��\n",NTdollar);
	
	system("pause");
	return 0;
} 
