#include<stdio.h>
#include<stdlib.h>

int main (){
	int part[5],a=0;
   while(a!=5)
{

	printf("(1)�б�\n");
	printf("(2)�Ʊб�\n");
	printf("(3)�U�z�б�\n");
	printf("(4)�����O\n");
	printf("(5)����\n");
	printf("�п�J�A�o¾�٥N��\n");
    gets(part);
	a=atoi(part);

	
switch(a){
	
		
		case 1:printf("\n�A��¾�٬O�б�\n");
		        break;
		case 2:printf("\n�A��¾�٬O�Ʊб�\n");
		break;
		case 3:printf("\n�A��¾�٬O�U�z�б�\n");
		break;
		case 4:printf("\n�A���S���b�ﶵ��\n");
		break;
	    /*default: printf("\n�A��¾�٨S���b�o�ﶵ��\n");*/ 
		
}	
	
}	
	
	
	
	system("pause");
	return 0;
}
