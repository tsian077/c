#include<stdio.h>
#include<stdlib.h>

int num=100;
void subFun(void);
int main (){
	 printf("�bmain��Ƥ���num��%d\n",num);
	 subFun();
	 
	
	system("pause");
	return 0;
}

void subFun(void){
	printf("�bsubFun��Ƥ���num��%d\n",num);
}
