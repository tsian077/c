#include<stdio.h>
#include<stdlib.h>

double sum(double a[],int n);
int main (){
  double arr[5],total;
  int i;


  for(i=0;i<5;i++){
  	  printf("請輸入陣列arr[%d]元素值",i);
  	  scanf("%lf",&arr[i]);
  	
  }
     for(i=0;i<5;i++)
	 
       printf("arr[%d]=%.2lf\n",i,arr[i]);
     
   total=sum(arr,i);
   printf("此陣列的總合為%.2lf\n",total);
   
   system("pause");
   return 0;
}

double sum(double a[],int n){
	int k;
	double tot;
	for(k=0;k<n;k++)
	tot +=a[k];
	return tot;
	
}
