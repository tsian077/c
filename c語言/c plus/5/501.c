#include<stdio.h>
#include<stdlib.h>



int main (){
	
  struct student{
  	 char name[10];
  	 int score;
  	
  };	
	struct student st1;
	printf("請輸入姓名:");
	scanf("%s",&st1.name);
	printf("請輸入分數:");
	scanf("%d",&st1.score);
	
	printf("%s的成績是%d\n",st1.name,st1.score);
	
	if(st1.score>60){
		printf("恭喜你過關了");
	}
	else{
		printf("抱歉你被當了");
	}
system("pause");
return 0;	
}
