#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int main (){
	char a[30],b[30],c[30],cmp;
	printf("�п�J�r��A:");
	gets(a); //�o��bŪ���r��ɡA�]���n�Ҷq��ϥΪ̷|�Ψ�ťզr���A
	//�ҥH�L�k��scanf() ,�ڭ̥����ϥ�gets()�����
	
	printf("�r��A������:%d",strlen(a));
	strcpy(b,a);//�ƻs�r�ꪺ���
	printf("\n�r��B:%s",b); 
	printf("\n�п�J�r��C:");
	gets(c);
	
	cmp=strcmp(c,a);//����r��j�p�����
	//�e���j��᭱ �A���G��1
	//�۵� ���G��0
	//�e���j��᭱�A���G��-1
	
	
	
	if(cmp==1)
	printf("�r��A�p��r��C");
	else if (cmp==-1)
	printf("�r��C�p��r��A");
	else
	printf("�r��C����r��A");
	

  system("pause");
  return 0;
} 
