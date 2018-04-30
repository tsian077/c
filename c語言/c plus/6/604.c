#include<stdio.h>
#include<stdlib.h>
#include<conio.h>
#include<ctype.h>
int main (){

  char ch,ch2;
  printf("請輸入一小寫的英文自母:");
  ch=getche();
  
  //將下列字元轉為大寫
  ch2=toupper(ch);
  printf("%c的大寫是%c\n",ch,ch2);
  
  /*
  while(ch!='\n'){
  continue:
   }
   */
//將下列的字元轉為小寫'
 printf("\n請輸入一大寫的英文字母:");
 scanf("%c",&ch);
 ch2=tolower(ch);
 printf("%c的小寫是%c\n",ch,ch2);
 
 system("pause");
 return 0;
}
  
