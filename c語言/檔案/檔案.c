#include<stdio.h>
#include<stdlib.h>

struct student {
	int num;
	char name[10];
	int grade;
	
};
int main (){
	int i,j;
	struct student s1,s2;
	FILE *fp;
	while (j!=3)
	{
		
		printf("(1)顯示所有資料(2)新增資料(3)離開\n");
		scanf("%d",&j);
		
		
		switch(j){
			 case 1:
			 	fp=fopen("學生成績檔.txt","r");
			 	
				 
				 while(fscanf(fp,"%6d %s %d",&s1.num,s1.name,&s1.grade)!=EOF)
				 {
				printf("%6d %s %d\n",s1.num,s1.name,s1.grade);
				 }
			 	
			 	fclose(fp);
				 break;
			 case 2:
			 
			 	printf("請輸入學號姓名與成績:\n");
			 		fp=fopen("學生成績檔.txt","a");
				 scanf("%6d %s %d\n",&s1.num,&s1.name,&s1.grade);
			 	 fprintf(fp,"%6d %s %d\n",s1.num,s1.name,s1.grade);
			 	 
			  fclose(fp);
			     
				  break;
			 
			 	
			 default :
			    j=3;
			
			
		}
		
		
	}
	
	system("pause");
	return 0;
} 
