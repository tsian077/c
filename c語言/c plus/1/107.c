#include<stdio.h>
#include<stdlib.h>

int main (){
	int a,b,c,d,e,f;
	printf("�п�J�Ĥ@�Ӿ��?");
	scanf("%d",&a);
	printf("�п�J�ĤG�Ӿ��?");
	scanf("%d",&b);
	printf("�п�J�ĤT�Ӿ��?");
	scanf("%d",&c);
	printf("�п�J�ĥ|�Ӿ��?");
	scanf("%d",&d);
	printf("�п�J�Ĥ��Ӿ��?");
	scanf("%d",&e);
	printf("�п�J�Ĥ��Ӿ��?");
	scanf("%d",&f);
	
	
	printf("\n�V�k�a��\n");
	printf("%10d %10d %10d\n",a,b,c);
	printf("%10d %10d %10d\n",d,e,f);
	
	printf("\n�V���a��\n");
	printf("%-10d %-10d %-10d\n",a,b,c);
	printf("%-10d %-10d %-10d\n",d,e,f);
	
	system("pause");
	return 0;
}

/*  �V�k��� %10d  ���� �]�����ӴN�O�V�k*/ 
/*  �V��     %-10d  ���V������ */ 
