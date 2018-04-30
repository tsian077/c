#include<stdio.h>
#include<stdlib.h>

int Max(int p[][3],int n, int m);

int main (){
	 int arr2[2][3];
	 int maximum,i,j;
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
     maximum=Max(arr2,2,3);
     printf("\n此陣列的最大值為%d\n",maximum);
     
system("pause");
return 0;
}
int Max(int p[][3],int x, int y){
	
	int i,j,maxi_value=p[0][0];
	
	for(i=0;i<x;i++){
	 	for(j=0;j<y;j++){
     	if(maxi_value < p[i][j]){
	 			maxi_value = p[i][j];

}
}
}

  return maxi_value;
}
