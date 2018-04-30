#include<stdio.h>
#include<stdlib.h>

int main () {
	double a,b;
	double total;
	printf("請輸入兩個浮點數");
	scanf("%lf %lf",&a,&b);
	total=a+b;
	printf("total=%lf",total);
	
	system("pause");
	return 0;
	
} 

/**double必須用%lf   float用%f**/
