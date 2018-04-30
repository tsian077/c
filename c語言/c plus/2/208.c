#include<stdio.h>
#include<stdlib.h>


int main (){

  int i,total;
  for(i=1;i<100;i++){
  	  i++;
	  total += i;
	  
  }
  	
  	printf("1到100的偶數和:%d\n",total-1);
  
  system("pause");
  return 0;
}
