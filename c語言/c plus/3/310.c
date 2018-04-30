#include<stdio.h>
#include<stdlib.h>


int main (){
   int arr[5]={100,200,300,400,500};
   int i;
   
   printf("\n陣列元素的值如下:\n");
   for(i=0;i<5;i++){
   	 printf("arr[%d]=%d\n",i,arr[i]);
   }  
     printf("\n陣列元素的位置如下：\n");
     for(i=0;i<5;i++){
     	printf("&arr[%d]=%p\n",i,&arr[i]);
	 }
      printf("\n陣列元素的味值如下：\n");
     for(i=1;i<5;i++){
     	printf("&arr{%d}=%p\n",i,arr+i);
	 }


 system("pause");
 return 0;
}
