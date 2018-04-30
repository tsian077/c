#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int main (){

  char str2[]="Apple iPod";
  char str4[]="Apple iPad";
  int n;
  
  n=strcmp(str2,str4);
  if(n>0){
  	printf("%s大於%s\n",str2,str4);
  }
  else if (n==0){
  	printf("%s等於%s\n",str2,str4);
  	}
  else
  {
  	printf("%s小於%s\n",str2,str4);
  }

  n=strncmp(str2,str4,5);
  if(n>0){
  	printf("%s前五個字元大於%s前五個字元\n",str2,str4);
  	}
  else if (n==0){
  	printf("%s前五個字元等於%s前五個字元\n",str2,str4);
  }
  else{
  	printf("%s前五個字元小於%s前五個字元\n",str2,str4);
  }
 system("pause");
 return 0;

}

