#include<stdio.h>
#include<stdlib.h>

int main (){
	int a,b,c;
	double average,total;
	printf("請輸入第一個整數?");
	scanf("%d",&a);
	printf("請輸入第二個整數?");
	scanf("%d",&b);
	printf("請輸入第三個整數?");
	scanf("%d",&c);
	
	total=a+b+c;
	average=total/3;
	
	printf("%d+%d+%d=%2.0lf\n",a,b,c,total);
	printf("平均數為%0.2lf",average);
	
	system("pause");
	return 0;
}

/* 除是/  取餘數是%   */
/* printf("%d+%d+%d=%2.0lf\n",a,b,c,total);
   printf("平均數為%0.2lf",average);      重點 */
