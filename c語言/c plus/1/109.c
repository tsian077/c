#include<stdio.h>
#include<stdlib.h>

int main (){
   int score;
   
   printf("請輸入你的分數:");
   scanf("%d",&score);
   if(60<=score&&score<=100){
   	  printf("及格");
   	  
   }
   else {
   	  printf("不及格");
   }
  int x;
  printf("\n\n請輸入你的X值:");
  scanf("%d",&x);
  if(x%2==0){
  	 printf("%d是偶數",x);
  }
  else{
  	  printf("%d是基數",x);
  }


  system("pause");
  return 0;
}


/*  &&是或 */ 
