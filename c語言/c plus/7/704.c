#define TRIPLE(x) x*x*x

#include<stdio.h>
#include<stdlib.h>

int main (){
	
	int num,triple_num;
	printf("�п�J�@�Ӿ��:");
	scanf("%d",&num);
	
	triple_num = TRIPLE(num);
	printf("%d���T���謰%d\n",num,triple_num);
	
	triple_num = TRIPLE(5);
	printf("5���T���謰%d\n",triple_num);
	
	system("pause");
	return 0;
}
