#include<stdio.h>
#include<stdlib.h>

int main (){
	  char str[20];
      char *pstr;
      printf("�п�Jstr�r��:");
      scanf("%s",str);
      
      printf("�п�Jpstr�r��:");
      pstr=(char *)malloc(sizeof(char)*20);
      
      scanf("%s",pstr);
      printf("\n�z��Jstr�r��p�U:%s\n",str);
      
      printf("�z��Jpstr�r��p�U:%s\n",pstr);
      
      system("pause");
      return 0;
}
