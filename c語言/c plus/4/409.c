#include<stdio.h>
#include<stdlib.h>

int sum(int p[][3],int n,int m);

int main (){
	int arr2[2][3];
	int total,i,j;
	
	for(i=0;i<2;i++){
		 for(j=0;j<3;j++){
		 	printf("請輸入arr[%d][%d]:",i,j);
		 	scanf("%d",&arr2[i][j]);
		 	
		 }
		}
	printf("\n陣列之值如下:\n");
	for(i=0;i<2;i++){
		for(j=0;j<3;j++){
			printf("arr[%d][%d]=%d\n",i,j,arr2[i][j]);
		}
	}
     total=sum(arr2,2,3);
 printf("\n此陣列的總和為%d\n",total);

system("pause");
return 0;

}
int sum(int p[][3],int x, int y){
	
	int i,j,tot=0;
	for(i=0;i<x;i++){
		for(j=0;j<y;j++){
			tot += p[i][j];
		}
	}
   return tot;
}
