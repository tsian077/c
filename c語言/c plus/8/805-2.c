#include<stdio.h>
#include<stdlib.h>

int main (){
	int arr[5][2];
	int i,j,tot=0;
	
	for(i=0;i<5;i++){
		printf("�п�J�|�ӼƦr(�Ʀr�����H�ťլ����j):");
	 for(j=0;j<2;j++)
	 {
	 	scanf("%d",&arr[i][j]);
	 	tot+=arr[i][j];
	 }
     printf("\n");		
		
	}
	for(i=0;i<5;i++){
		for(j=0;j<2;j++){
			printf("%d ",arr[i][j]);
		}
	  printf("\n");
	}
	printf("sum:%d\n",tot);
	
	system("pause");
	return 0;
}
