#include<stdio.h>
#include<stdlib.h>

int main (){
	double a,b,c,d,e,f;
	printf("�п�J�Ĥ@�Ӿ��?");
	scanf("%lf",&a);
	printf("�п�J�ĤG�Ӿ��?");
	scanf("%lf",&b);
	printf("�п�J�ĤT�Ӿ��?");
	scanf("%lf",&c);
	printf("�п�J�ĥ|�Ӿ��?");
	scanf("%lf",&d);
	printf("�п�J�Ĥ��Ӿ��?");
	scanf("%lf",&e);
	printf("�п�J�Ĥ��Ӿ��?");
	scanf("%lf",&f);
	
	
	printf("\n�V�k�a��\n");
	printf("%10.2lf %10.2lf %10.2lf\n",a,b,c);
	printf("%10.2lf %10.2lf %10.2lf\n",d,e,f);
	
	printf("\n�V�k�a��\n");
	printf("%-10.2lf %-10.2lf %-10.2lf\n",a,b,c);
	printf("%-10.2lf %-10.2lf %-10.2lf\n",d,e,f);
	system("pause");
	return 0;
}
