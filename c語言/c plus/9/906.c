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

		printf("請輸入第%d位同學的姓名",i+1);
		scanf("%s",&s1[i].name);
		printf("請輸入第%d位同學C語言的成績",i+1);
	    scanf("%d",&s1[i].price);
	    
		}
	for(i=0;i<5;i++){
		printf("%s      %5d\n",s1[i].name,s1[i].price);
		
	}
	
	
	
	system("pause");
	return 0;
}
