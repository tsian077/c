#include<stdio.h>
#include<stdlib.h>

int main (){
	enum classify{
		Freshman,Sophomore,Junior,Senior
	};
	
	struct student {
	  char *name;
	  enum classify id;
	};
	
	struct student st1;
	st1.name="Peter";
	st1.id=Junior;
	printf("%s�O�j�T���ǥ�\n",st1.name);
	
	system("pause");
	return 0;
	
	
}
