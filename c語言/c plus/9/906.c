#include<stdio.h>
#include<stdlib.h>

  struct student{
  	char name[10];
  	int  price;
  };



int main (){
	struct student s1[5];
	int i;
	
	for(i=0;i<5;i++){

		printf("�п�J��%d��P�Ǫ��m�W",i+1);
		scanf("%s",&s1[i].name);
		printf("�п�J��%d��P��C�y�������Z",i+1);
	    scanf("%d",&s1[i].price);
	    
		}
	for(i=0;i<5;i++){
		printf("%s      %5d\n",s1[i].name,s1[i].price);
		
	}
	
	
	
	system("pause");
	return 0;
}
