#include<stdio.h>
#include<stdlib.h>

int main (){
	int unit;
	double price=23.34;
	double total;
	printf("�аݱz�n�R�X�~�W�G��?");
	scanf("%d",&unit);
	total=unit*price;
	printf("�ڶR�F%d�~100%��ī�G��\n",unit);
	printf("��F%lf��",total);
	
	system("pause");
	return 0;
}
