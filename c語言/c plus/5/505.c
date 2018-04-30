#include<stdio.h>
#include<stdlib.h>

struct rect{
	int length,width;
};

int callarea(struct rect *pr);

int main(){
	int area;
	struct rect r1={20,18};
	
	area= callarea(&r1);
	
	printf("此矩形的長度為%d,寬為%d,面積為%d\n",r1.length,r1.width,area);


system("pause");
return 0;	
}
int callarea(struct rect *pr){
	int area;
	area=pr->length*pr->width;
}
