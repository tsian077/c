#include<stdio.h>
#include<stdlib.h>
void callFun(void);
int main (void){
 int i;
 for(i=0;i<=5;i++){
 	 callFun();
 }
 system("pause");
 return 0;
}

void callFun(void){
	int ai=100;
	static int si=100;
	ai++;
	si++;
  printf("ai=%d,si=%d\n",ai,si);	
	
}
