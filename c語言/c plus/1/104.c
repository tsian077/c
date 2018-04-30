#include<stdio.h>
#include<stdlib.h>

int main (){
	int unit;
	double price=23.34;
	double total;
	printf("請問您要買幾瓶頻果汁?");
	scanf("%d",&unit);
	total=unit*price;
	printf("我買了%d瓶100%的蘋果汁\n",unit);
	printf("花了%lf元",total);
	
	system("pause");
	return 0;
}
