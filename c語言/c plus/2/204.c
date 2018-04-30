#include<stdio.h>
#include<stdlib.h>


int main (){

   char ch,U,P,M;
   
   printf("請問你的身分:以字母表示分別如下:\nU:代表大學生，M:表示研究生，P:表示博士生");
   scanf("%s",&ch);
   
   switch(ch){
   	  case 'U':
   	   printf("你是大學生\n");
   	   break;   
	  case 'M':
   	   printf("你是研究生\n");
   	   break;
   	  case 'P':
   	   printf("你是博士生\n");
   	   break;
   	  default:
   	    printf("你輸入身分不正確");
   	    break;
   	
   }

system("pause");
return 0;
}
