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
 
  	 printf("�п�J�Ĥ@��ǥͩm�W");
  	   scanf("%s",&s1.name);
  	   printf("�п�J�Ĥ@��ǥͦ��Z");
  	   scanf("%d",&s1.grade);
  	 printf("�п�J�ĤG��ǥͩm�W");
  	   scanf("%s",&s2.name);
  	   printf("�п�J�ĤG��ǥͦ��Z");
  	   scanf("%d",&s2.grade);
  	 printf("�п�J�ĤT��ǥͩm�W");
  	   scanf("%s",&s3.name);
  	   printf("�п�J�ĤT��ǥͦ��Z");
  	   scanf("%d",&s3.grade);
  	   
  	printf("\n�Ĥ@��ǥ�:%s",s1.name);
  	   
  	printf("\n���Z:%d",s1.grade);
  	
  	printf("\nGPA=%c",GPA(s1.grade));
	
	printf("\n�ĤG��ǥ�:%s",s2.name);
  	   
  	printf("\n���Z:%d",s2.grade);
  	
    printf("\nGPA=%c",GPA(s2.grade));
	
	printf("\n�ĤG��ǥ�:%s",s3.name);
  	   
  	
	printf("\n���Z:%d",s3.grade);
  	
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
