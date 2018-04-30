#define TRIPLE(x) x*x*x

#include<stdio.h>
#include<stdlib.h>

int main (){
	
	int num,triple_num;
	printf("請輸入一個整數:");
	scanf("%d",&num);
	
	triple_num = TRIPLE(num);
	printf("%d的三次方為%d\n",num,triple_num);
	
	triple_num = TRIPLE(5);
	printf("5的三次方為%d\n",triple_num);
	
	system("pause");
	return 0;
}
