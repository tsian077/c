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
		
		printf("(1)��ܩҦ����(2)�s�W���(3)���}\n");
		scanf("%d",&j);
		
		
		switch(j){
			 case 1:
			 	fp=fopen("�ǥͦ��Z��.txt","r");
			 	
				 
				 while(fscanf(fp,"%6d %s %d",&s1.num,s1.name,&s1.grade)!=EOF)
				 {
				printf("%6d %s %d\n",s1.num,s1.name,s1.grade);
				 }
			 	
			 	fclose(fp);
				 break;
			 case 2:
			 
			 	printf("�п�J�Ǹ��m�W�P���Z:\n");
			 		fp=fopen("�ǥͦ��Z��.txt","a");
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
