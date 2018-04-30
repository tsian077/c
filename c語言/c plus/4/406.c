#include<stdio.h>
#include<stdlib.h>
void change(int *,int *);
int main (){
	int i=100,j=200;
	printf("交換前i與j的值:\n");
	printf("i=%d,j=%d\n",i,j);
	
	change(&i,&j);
	printf("交換後i與j的值:\n");
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
