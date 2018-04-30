#include<stdio.h>
#include<stdlib.h>


int main (){

  int i=0,total;
 
  do{
  	 i= i + 2;
  	total +=i;
  	
  	 
  } 
  while(i<100);
  	
  	printf("1到100的偶數和:%d\n",total-1);
  
  system("pause");
  return 0;
}
