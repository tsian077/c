#include<stdio.h>
#include<stdlib.h>

double sum(double a[],int n);
int main (){
  double arr[5],total;
  int i;


  for(i=0;i<5;i++){
  	  printf("�п�J�}�Carr[%d]������",i);
  	  scanf("%lf",&arr[i]);
  	
  }
     for(i=0;i<5;i++)
	 
       printf("arr[%d]=%.2lf\n",i,arr[i]);
     
   total=sum(arr,i);
   printf("���}�C���`�X��%.2lf\n",total);
   
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
