#include<stdio.h>
#include<stdlib.h>


int main (){
  int i,num;
  int num1=0,num2=0,num3=0,num4=0,others=0;
  
  for(i=0;i<10;i++){
   printf("\n�Z���Կ�H�p�U:\n1:�p��\n2:�p��\n3:�p��\n4:�p��\n");
    printf("�аݧA�n�����Կ�H:(1-4):");
	scanf("%d",&num);
	switch(num){
		case 1:
			num1++;
			break;
		case 2:
			num2++;
			break;
		case 3:
			num3++;
			break;
		case 4:
			num4++;
			break;
		default:
			printf("�A��J�����X�����T\n");
			others++;
			break;
		
	}  	
     printf("�ثe�o����:�p��:%d,�p��:%d,�p��:%d,�p��:%d,�o��%d",num1,num2,num3,num4,others);
  }
  
system("pause");
return 0;
}

