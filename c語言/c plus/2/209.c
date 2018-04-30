#include<stdio.h>
#include<stdlib.h>


int main (){

  int i=1,total;
 
  do{
  	total +=i;
  	 i= i + 2;
  	 
  } 
  while(i<100);
  	
  	printf("1到100的奇數和:%d\n",total-1);
  
  system("pause");
  return 0;
}
