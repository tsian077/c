#include<stdio.h>
#include<stdlib.h>

int main (){
   int arr[2][3];
   int i,j;
   
   for(i=0;i<2;i++){
   	for(j=0;j<3;j++){
   		printf("�п�J�}�Carr[%d][%d]������",i,j);
   		scanf("%d",&arr[i][j]);
   		
	   }
   }
   for(i=0;i<2;i++){
   	for(j=0;j<3;j++){
   		 printf("arr[%d][%d]=%d\n",i,j,arr[i][j]);
   		
	   }
   }
 
/****other printf********/
printf("�t�@�ت�ܤ覡\n");


   for(i=0;i<2;i++){
   	for(j=0;j<3;j++){
   		printf("arr[%d][%d]=%d\n",i,j,*(arr[i]+j));
   		
   		
	   }
   }
   /****three printf********/
   printf("�ĤT��");
   for(i=0;i<2;i++){
   	for(j=0;j<3;j++){
   		 printf("arr[%d][%d]=%d\n",i,j,*(*(arr+i)+j));
   		
	   }
   }

system("pause");
return 0;
}
