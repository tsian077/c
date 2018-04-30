#include<stdio.h>
#include<stdlib.h>
int main(){
    int i=0;
    char str[16]="This is a book.";
    char str1[16];
    char*ptr=str;
    char *ptr1="This is an apple.";
    printf("str = %s\n",str);
    printf("ptr = %s\n",ptr);
    printf("ptr1 = %s\n",ptr1);
    printf("±N¦r¦êstr½Æ»s¨ìstr1:\n");
    ptr1=str1;
    while(*ptr!='\0'){
                      *(ptr1+i)=*ptr;
                      ptr++,i++;
                      }
                      *(ptr+i)='\0';
    printf("str1 = %s\n",str1);
    printf("ptr1 = %s\n",ptr1);
  
    
    
    system("pause");
    return 0;
    }
