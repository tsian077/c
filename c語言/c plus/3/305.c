#include<stdio.h>
#include<stdlib.h>
int x,y;
int callTotal(int x,int y);
int main (){
  int tot;
  
  printf("�п�Jx,y����");
  scanf("%d %d",&x,&y);
  tot=callTotal(x,y);
  printf("%d+%d=%d\n",x,y,tot);
  
}

int callTotal(int x,int y){
	int sum;
	sum=x+y;
	return sum;
	
}

