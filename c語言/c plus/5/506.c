#include<stdio.h>
#include<stdlib.h>

struct circle{
	int x,y;
	double radius;
};
double callarea(struct circle *pr);


int main ( ){
	
	double area;
	struct circle c1={10,10,8.5};
	
	area =callarea(&c1);
		printf("���ꪺ��߬�(%d,%d),�b�|��%.2f,���n��%0.2f\n",c1.x,c1.y,c1.radius,area);
	

system("pause");
return 0;

}

double callarea(struct circle *pr){
	
	double area;
	area = pr->radius*pr->radius*3.14159;
	return area;
}
