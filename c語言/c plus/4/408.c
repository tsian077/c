#include<stdio.h>
#include<stdlib.h>
int Max(int *,int n);
int main (){
  int arr[5];
  int maximum,i;
  
  for(i=0;i<5;i++){
      printf("請輸入arr[%d]元素值:",i);
	  scanf("%d",&arr[i]);  	

  }
    printf("\n陣列的元素值分別如下:\n");
    for(i=0;i<5;i++){
    	 printf("arr[%d]=%d\n",i,arr[i]);
	}

    maximum=Max(&arr,5);
    printf("\n此陣列的最大值為%d\n",maximum);
    
    system("pause");
    return 0;

} 
int Max(int *p,int n){
	int i,maxi_value=*p;
	for(i=0;i<n;i++){
		if(maxi_value < *(p+i)){
			  maxi_value=*(p+i);
		}
		
	}
	return maxi_value;
}
