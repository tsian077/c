#include<stdio.h>
#include<stdlib.h>

int main (){
	int a,b,c;
	double average,total;
	printf("�п�J�Ĥ@�Ӿ��?");
	scanf("%d",&a);
	printf("�п�J�ĤG�Ӿ��?");
	scanf("%d",&b);
	printf("�п�J�ĤT�Ӿ��?");
	scanf("%d",&c);
	
	total=a+b+c;
	average=total/3;
	
	printf("%d+%d+%d=%2.0lf\n",a,b,c,total);
	printf("�����Ƭ�%0.2lf",average);
	
	system("pause");
	return 0;
}

/* ���O/  ���l�ƬO%   */
/* printf("%d+%d+%d=%2.0lf\n",a,b,c,total);
   printf("�����Ƭ�%0.2lf",average);      ���I */
