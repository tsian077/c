#include<stdio.h>
#include<stdlib.h>

int main ()
{
	int num[2][3];
	int i,j;
	for (i=0;i<3;i++){ 
	 for (j=0;j<2;j++){ 
	   printf("請輸入num[%d][%d]:",i,j);
	   scanf("%d",&num[i][j]);
	   }
	   } 
	   
	printf("\n印出陣列num的所有元素\n");
	 for(i=0;i<3;i++)
	 { 
	  for(j=0;j<2;j++)
	  { 
	  printf("num[%d][%d]=%d\n", i, j,num[i][j]);
	  }
	  
	   } 
	  system("pause");
	  return 0;
}
 
