#include<stdio.h>

int main()
{
	int *p;
	int a[10];
	//�ŧia[0]����m������ 
	p=&a[0];
	//�N���Ы��Va���U�@�Ӧ�}�ç�j��i���ȥᵹ���� 
	for(int i=0;i<10;i++)
	{
		*p=i;
		p++;
	}
	for(int i=0;i<10;i++)
	{
		printf("%d\n",a[i]);
	}
	
	return 0;
} 
