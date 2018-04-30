#include<stdio.h>
#include<stdlib.h>

int main (){
 int i,j;
 
 for(i=1;i<=5;i++){
 	for(j=0;j<5-i;j++)
	 printf(" ");
	for(j=0;j<i;j++)
	 printf("%c",'*');
	 printf("\n");
	 
	 
 }
  
system("pause");
return 0;

}

