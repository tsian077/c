#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int main (){

  char str2[]="Apple iPod";
  char str4[]="Apple iPad";
  int n;
  
  n=strcmp(str2,str4);
  if(n>0){
  	printf("%s�j��%s\n",str2,str4);
  }
  else if (n==0){
  	printf("%s����%s\n",str2,str4);
  	}
  else
  {
  	printf("%s�p��%s\n",str2,str4);
  }

  n=strncmp(str2,str4,5);
  if(n>0){
  	printf("%s�e���Ӧr���j��%s�e���Ӧr��\n",str2,str4);
  	}
  else if (n==0){
  	printf("%s�e���Ӧr������%s�e���Ӧr��\n",str2,str4);
  }
  else{
  	printf("%s�e���Ӧr���p��%s�e���Ӧr��\n",str2,str4);
  }
 system("pause");
 return 0;

}

