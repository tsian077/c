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
 	

  	 printf("�п�J�Ĥ@��ǥͩm�W");
  	   scanf("%s",&s1[i].name);
  	   printf("�п�J�Ĥ@��ǥͦ��Z");
  	   scanf("%d",&s1[i].grade);
  
  	
 }
  	
	
	
	system("pause");
	return 0;
}
