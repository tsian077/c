#include<stdio.h>
#include<stdlib.h>

int main (){
	  char str[20];
      char *pstr;
      printf("請輸入str字串:");
      scanf("%s",str);
      
      printf("請輸入pstr字串:");
      pstr=(char *)malloc(sizeof(char)*20);
      
      scanf("%s",pstr);
      printf("\n您輸入str字串如下:%s\n",str);
      
      printf("您輸入pstr字串如下:%s\n",pstr);
      
      system("pause");
      return 0;
}
