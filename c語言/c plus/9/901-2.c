#include<stdio.h>
#include<stdlib.h>

void exchange(double*,double*);


int main (){
	double a,b;
	
	printf("�п�J��ӯB�I��");
	scanf("%lf %lf",&a,&b);
	printf("\na=%f,b=%f",a,b);
	exchange(&a,&b);
	printf("\n a=%f,b=%f",a,b);

system("pause");
return 0;
}
void exchange(double *x,double *y){
	double temp;
	
	temp=*x;
	*x=*y;
	*y=temp;
	
	
}
