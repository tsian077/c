#include<stdio.h>
#include<stdlib.h>

int main (){
   
   int arr[]={100,200,300,400,500};
   int *pointer=&arr;
   int i;
   for(i=0;i<5;i++){
   	 printf("arr[%d]=%d\n",i,arr[i]);
   	
   }
   //�t�@�ت�ܤ覡//
   printf("\n�t�@�ت�ܤ覡\n");
   for(i=0;i<5;i++){
   	  printf("arr[%d]=%d\n",i,*(arr+i));
   	
   } 
  //�ĤT�ت�ܤ覡//
  printf("\n�ĤT�ت�ܤ覡\n");
   for(i=0;i<5;i++){
   	 printf("arr[%d]=%d\n",i,*((pointer)+i));
   } 

system("pause");
return 0;
}
