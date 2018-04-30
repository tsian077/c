#include<stdio.h>
#include<stdlib.h>
int sum(int *,int n);
int main (){
  int arr[]={10,20,30,40,50};
  int total,i;
  for(i=0;i<5;i++){
  	 printf("arr[%d]=%d\n",i,arr[i]);
  	
  }
  total=sum(&arr,5);
  printf("total=%d\n",total);
  
  system("pause");
  return 0;
  
}

int sum(int *p,int n){
	int i,tot=0;
	for(i=0;i<n;i++){
		tot += *(p+i) ;
		
	}
	return tot;
	
}
