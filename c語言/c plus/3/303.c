#include<stdio.h>
#include<stdlib.h>

int num=100;
void subFun(void);
int main (){
	 printf("在main函數中的num為%d\n",num);
	 subFun();
	 
	
	system("pause");
	return 0;
}

void subFun(void){
	printf("在subFun函數中的num為%d\n",num);
}
