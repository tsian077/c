#include<stdio.h>
#include<stdlib.h>


int main (){

   char ch,U,P,M;
   
   printf("�аݧA������:�H�r����ܤ��O�p�U:\nU:�N��j�ǥ͡AM:��ܬ�s�͡AP:��ܳդh��");
   scanf("%s",&ch);
   
   switch(ch){
   	  case 'U':
   	   printf("�A�O�j�ǥ�\n");
   	   break;   
	  case 'M':
   	   printf("�A�O��s��\n");
   	   break;
   	  case 'P':
   	   printf("�A�O�դh��\n");
   	   break;
   	  default:
   	    printf("�A��J���������T");
   	    break;
   	
   }

system("pause");
return 0;
}
