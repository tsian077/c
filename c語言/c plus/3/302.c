#include<stdio.h>
#include<stdlib.h>
int adjust(int);
int main (){
 int score,final;
 printf("�п�J�A������:");
 scanf("%d",&score);
 

 
 printf("�վ�᪺����:%d",adjust(score));
 
 system("pause");
 return 0;
}

int adjust(int score){
	int final;
	if(score>=60){
		final =score+10;
		
	}
	else{
		final =score+5;
	}
  return final;
}

