#include<stdio.h>
#include<stdlib.h>
int adjust(int);
int main (){
 int score,final;
 printf("請輸入你的分數:");
 scanf("%d",&score);
 

 
 printf("調整後的分數:%d",adjust(score));
 
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

