#include<stdio.h>
#include<stdlib.h>

void exchange(int *,int *);


int main (){
	int a,b;
	
	printf("請輸入兩個數字");
	scanf("%d %d",&a,&b);
	printf("a=%d,b=%d",a,b);
	exchange(&a,&b);
	printf("\n a=%d,b=%d",a,b);

system("pause");
return 0;
}


void exchange(int *x,int *y){
	int temp;
	
	temp=*x;
	*x=*y;
	*y=temp;
	
	
}
