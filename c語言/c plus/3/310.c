#include<stdio.h>
#include<stdlib.h>


int main (){
   int arr[5]={100,200,300,400,500};
   int i;
   
   printf("\n�}�C�������Ȧp�U:\n");
   for(i=0;i<5;i++){
   	 printf("arr[%d]=%d\n",i,arr[i]);
   }  
     printf("\n�}�C��������m�p�U�G\n");
     for(i=0;i<5;i++){
     	printf("&arr[%d]=%p\n",i,&arr[i]);
	 }
      printf("\n�}�C���������Ȧp�U�G\n");
     for(i=1;i<5;i++){
     	printf("&arr{%d}=%p\n",i,arr+i);
	 }


 system("pause");
 return 0;
}
