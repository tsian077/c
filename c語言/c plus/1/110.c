#include<stdio.h>
#include<stdlib.h>

int main (){
   int a,c;
   double b;
   printf("請輸入變數a的值:");
   scanf("%d",&a);
   printf("請輸入變數b的值:");
   scanf("%lf",&b);
   printf("請輸入變數c的值:");
   scanf("%d",&c);

  if(a>=60&&a<100){
  	printf("1\n");
  }
  else{
  	printf("0\n");
  }
  
  printf("%lf\n",(b+1)/10);
  
  if(a>c){
  	printf("a=%d\n",a);
  }
  else{
  	printf("c=%d\n",c);
  }

  system("pause");
  return 0;
}

