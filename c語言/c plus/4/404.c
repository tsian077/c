#include<stdio.h>
#include<stdlib.h>

int main (){
   int arr[2][3];
   int i,j;
   
   for(i=0;i<2;i++){
   	for(j=0;j<3;j++){
   		printf("請輸入陣列arr[%d][%d]元素值",i,j);
   		scanf("%d",&arr[i][j]);
   		
	   }
   }
   for(i=0;i<2;i++){
   	for(j=0;j<3;j++){
   		 printf("arr[%d][%d]=%d\n",i,j,arr[i][j]);
   		
	   }
   }
 
/****other printf********/
printf("另一種表示方式\n");


   for(i=0;i<2;i++){
   	for(j=0;j<3;j++){
   		printf("arr[%d][%d]=%d\n",i,j,*(arr[i]+j));
   		
   		
	   }
   }
   /****three printf********/
   printf("第三種");
   for(i=0;i<2;i++){
   	for(j=0;j<3;j++){
   		 printf("arr[%d][%d]=%d\n",i,j,*(*(arr+i)+j));
   		
	   }
   }

system("pause");
return 0;
}
