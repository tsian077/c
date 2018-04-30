#include<stdio.h>
#include<stdlib.h>

int main (){
   
   int arr[]={100,200,300,400,500};
   int *pointer=&arr;
   int i;
   for(i=0;i<5;i++){
   	 printf("arr[%d]=%d\n",i,arr[i]);
   	
   }
   //另一種表示方式//
   printf("\n另一種表示方式\n");
   for(i=0;i<5;i++){
   	  printf("arr[%d]=%d\n",i,*(arr+i));
   	
   } 
  //第三種表示方式//
  printf("\n第三種表示方式\n");
   for(i=0;i<5;i++){
   	 printf("arr[%d]=%d\n",i,*((pointer)+i));
   } 

system("pause");
return 0;
}
