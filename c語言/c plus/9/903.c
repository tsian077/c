#include<stdio.h>
#include<stdlib.h>

int greater(int [],int n);
int main (){
	int arr[6];
	int i;
	
	for(i=0;i<6;i++){
		printf("�п�J��%d�Ӥ���",i+1);
		scanf("%d",&arr[i]);
	}

    printf("\n�A��J����Ʀp�U");
	for(i=0;i<6;i++){
    	printf("\ndata[%d]=%d",i,arr[i]);
	}
	printf("\n�j��60������%d��",greater(arr,6));


	//greater(&arr[0]);
	system("pause");
	return 0;
}

int greater(int *x,int n){
	int i,c=0;
	for(i=0;i<n;i++){
	if (x[i]>=60)
	c++;
	}
   return c;
}

