#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#define random(x) rand()%()+
int main (){
	 int i,j;
	 int x;
	 printf("�H���ƪ��̤j�Ȭ�:");
	 scanf("%d",&x);
	 for(i=1;i<5;i++){
	 	for(j=1;j<4;j++){
	 		printf("%5d",random(x));
		 }
		 printf("\n");
	 }
	
	
	system("pause");
	return 0;
}
