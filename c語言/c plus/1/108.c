#include<stdio.h>
#include<stdlib.h>

int main (){
	double a,b,c,d,e,f;
	printf("請輸入第一個整數?");
	scanf("%lf",&a);
	printf("請輸入第二個整數?");
	scanf("%lf",&b);
	printf("請輸入第三個整數?");
	scanf("%lf",&c);
	printf("請輸入第四個整數?");
	scanf("%lf",&d);
	printf("請輸入第五個整數?");
	scanf("%lf",&e);
	printf("請輸入第六個整數?");
	scanf("%lf",&f);
	
	
	printf("\n向右靠齊\n");
	printf("%10.2lf %10.2lf %10.2lf\n",a,b,c);
	printf("%10.2lf %10.2lf %10.2lf\n",d,e,f);
	
	printf("\n向右靠齊\n");
	printf("%-10.2lf %-10.2lf %-10.2lf\n",a,b,c);
	printf("%-10.2lf %-10.2lf %-10.2lf\n",d,e,f);
	system("pause");
	return 0;
}
