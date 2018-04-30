#include<stdio.h>
#include<stdlib.h>
struct student{
	char name[20];
	int score;
};
typedef struct student ST;

int main () {
    ST stname;
    
    stname.name="john";
    stname.score=90;
    
    printf("%s的分數為%d\n",stname.name,stname.score);

	
	system("pause");
	return 0;
	
}
