#include<stdio.h>
#include<stdlib.h>
#include<ctype.h>
int main (){

  char ch,ch2;
  printf("�п�J�@�p�g���^��ۥ�:");
  scanf("%c",&ch);
  
  //�N�U�C�r���ର�j�g
  ch2=toupper(ch);
  printf("%c���j�g�O%c",ch,ch2);
  
 
  while(getchar()!='\n'){
  continue;
   }
   
//�N�U�C���r���ର�p�g'
 printf("\n�п�J�@�j�g���^��r��:");
 scanf("%c",&ch);
 ch2=tolower(ch);
 printf("%c���p�g�O%c",ch,ch2);
 
 system("pause");
 return 0;
}
  
