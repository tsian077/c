#include<stdio.h> 
#include<stdlib.h>
struct student{
	char name[20];
	int grade;
	
};
char GPA(int);
int main (){
  int i;
  struct student s1,s2,s3;
 
  	 printf("請輸入第一位學生姓名");
  	   scanf("%s",&s1.name);
  	   printf("請輸入第一位學生成績");
  	   scanf("%d",&s1.grade);
  	 printf("請輸入第二位學生姓名");
  	   scanf("%s",&s2.name);
  	   printf("請輸入第二位學生成績");
  	   scanf("%d",&s2.grade);
  	 printf("請輸入第三位學生姓名");
  	   scanf("%s",&s3.name);
  	   printf("請輸入第三位學生成績");
  	   scanf("%d",&s3.grade);
  	   
  	printf("\n第一位學生:%s",s1.name);
  	   
  	printf("\n成績:%d",s1.grade);
  	
  	printf("\nGPA=%c",GPA(s1.grade));
	
	printf("\n第二位學生:%s",s2.name);
  	   
  	printf("\n成績:%d",s2.grade);
  	
    printf("\nGPA=%c",GPA(s2.grade));
	
	printf("\n第二位學生:%s",s3.name);
  	   
  	
	printf("\n成績:%d",s3.grade);
  	
	printf("\nGPA=%c",GPA(s3.grade)); 
  
  	
 	
	
	system("pause");
	return 0;
	}
char GPA(int x){
	char re;
	if(x>=90)
	
		re='A';
	
	else if(x>=80&&x<90)
		re='B';
	
	else if(x>=70&&x<80)
	    re='C';
	
	
	else
		re='D';
	
	
	
	
	return re;
}
