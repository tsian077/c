#include<stdio.h>
#include<stdlib.h>

int sum(int a[],int n);
int main (){
   int arr[5],i,maximum;
   
 for(i=0;i<5;i++){
 	printf("�п�J�}�Carr[%d]������\n",i);
    scanf("%d",&arr[i]);
 }
    for(i=0;i<5;i++)
     printf("arr[%d]=%d\n",i,arr[i]);
    
    
     maximum=max(arr,5);
    printf("���}�C�̤j�Ȭ�%d\n",maximum);
    
	system("pause");
    return 0;
}

int max(int a[],int n){
	int k,M;
	M=a[0];
	for(k=0;k<n;k++){
		if (a[k]>M){
			M=a[k];
		}
		
}
	return M;
}
