#include<stdio.h> 
#include<stdlib.h>
struct student{
	char name[20];
	int grade;
	
};

int main (){
  int i;
  struct student s1[3];
 
 
 for(i=0;i<3;i++){
 	

  	 printf("請輸入第一位學生姓名");
  	   scanf("%s",&s1[i].name);
  	   printf("請輸入第一位學生成績");
  	   scanf("%d",&s1[i].grade);
  
  	
 }
  	
	
	
	system("pause");
	return 0;
}
