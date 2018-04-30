#include<stdio.h>
#include<stdlib.h>

void ss (int *,int);

int main (){
	int arr[15],n=15,arr2[5][3],i,j,number=0;

	printf("½Ð¿é¤J...\n");
	for(i=0;i<n;i++){
		
		printf("arr[%d]:",i);
		scanf("%d",&arr[i]);
	}
	ss(arr,n);
	for(i=0;i<5;i++){
		for(j=0;j<3;j++){
			arr2[i][j]=arr[number];
			number++;
		}
	}
	
		printf("¦L¥X°}¦C...");
		for(i=0;i<5;i++){
			for(j=0;j<3;j++){
				printf("\narr2[%d][%d]=%d",i,j,arr2[i][j]);
				
			}
		}
	
    system("pause");
    return 0;
}
void ss(int *data,int n){
	int i,j,min,temp;
	
	for(i=0;i<n;i++){
		min=i;
		for (j=i+1;j<n;j++){
			
			
			if(data[j]<data[min]){
			min=j;
			
			temp=data[i];
			data[i]=data[min];
			data[min]=temp;
			
				
			}
			
			
		}
	}
	
}
