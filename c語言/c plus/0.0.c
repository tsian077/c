#include<stdio.h>
#include<stdlib.h>
void sorting(int *,int n);


int main (){
	int scoredata[10];
	int i;
	printf("�п�J�Q�Ӽ�...\n");
	for(i=0;i<10;i++){
		printf("��%d��: ",i+1);
		scanf("%d",&scoredata[i]);
	}
	
	printf("�Ƨǫe: ");
	for(i=0;i<10;i++){
		printf("%d ",scoredata[i]);
	}
	sorting(scoredata,10);
	printf("\n");
	printf("�Ƨǫ�: ");
	for(i=0;i<10;i++){
		printf("%d ",scoredata[i]);
} 

system("pause");
return 0;

} 
void sorting(int *data2,int n){
	int i,j,temp;
     for(i=0;i<n-1;i++)
	
	
		for(j=0;j<n-1;j++)
	
			
		if(data2[j]>data2[j+1]){
		
	    temp=data2[j];
	    data2[j]=data2[j+1];
		data2[j+1]=temp;
   }
		  

}

