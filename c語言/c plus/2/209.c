#include<stdio.h>
#include<stdlib.h>


int main (){

  int i=1,total;
 
  do{
  	total +=i;
  	 i= i + 2;
  	 
  } 
  while(i<100);
  	
  	printf("1��100���_�ƩM:%d\n",total-1);
  
  system("pause");
  return 0;
}
