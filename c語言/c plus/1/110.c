#include<stdio.h>
#include<stdlib.h>

int main (){
   int a,c;
   double b;
   printf("�п�J�ܼ�a����:");
   scanf("%d",&a);
   printf("�п�J�ܼ�b����:");
   scanf("%lf",&b);
   printf("�п�J�ܼ�c����:");
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

