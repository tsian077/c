#include<stdio.h>
#include<stdlib.h>
void change(int *,int *);
int main (){
	int i=100,j=200;
	printf("�洫�ei�Pj����:\n");
	printf("i=%d,j=%d\n",i,j);
	
	change(&i,&j);
	printf("�洫��i�Pj����:\n");
	printf("i=%d,j=%d\n",i,j);
	
	system("pause");
	return 0;
	
}
void change(int *x,int *y){
	
	int temp;
	temp=*x;
	*x=*y;
	*y=temp;
}
