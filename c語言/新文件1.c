#include<stdio.h>
#include<stdlib.h>

int main ()
{
	int part[5],i=0;
	
while(i!=5)
{
	
	
	printf("(1)�б�\n(2)�Ʊб�\n(3)�U�z�б�\n(4)�����O\n(5)����\n");
	printf("�п�J�A��¾�٥N��");
    
	gets(part);
	i=atoi(part);
	
switch(i)
{
		case 1:printf("�A��¾�٬O�б�");break;
	    case 2:printf("�A��¾�٬O�б�");break;
	    case 3:printf("�A��¾�٬O�б�");break;
	  default : printf("�A��¾�٨S�S�b�o�ǿﶵ��");
}
}
	
	system("pause");
	return 0;
}
