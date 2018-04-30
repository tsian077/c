#include<stdio.h>
#include<stdlib.h>
void sorting(int*,int);
int main (){
	int i;
	int scoredata[10];
	printf("請輸入十個數...\n");
	for(i=0;i<10;i++){
		printf("第%d個數",i+1);
		scanf("%d",&scoredata[i]);
		
	}
	
    printf("排序前:");
    for(i=0;i<10;i++)
    printf(" %d",scoredata[i]);
    sorting(scoredata,10);
    
    
    printf("\n排序後:");
    for(i=0;i<10;i++)
    printf(" %d",scoredata[i]);


	system("pause");
	return 0;
}

void sorting(int* data2,int n){
	
	int i,j,LN=n-1;
	
	for(i=0;i<LN;i++)
	{
	   for(j=0;j<LN;j++)
	   {
	   	
	   	if(data2[j]>data2[j+1]){
		int temp = data2[j+1];
	   	data2[j+1]=data2[j];
	   	data2[j]=temp;
	    }
	   }	
	}
} 
