#include<stdio.h>
#include<stdlib.h>
#include<math.h>
int main (){
	double result;
	double a,b,c,d,e,f;
	printf("�п�Ja,b,c����:");
	scanf("%lf %lf %lf",&a,&b,&c);
	printf("�п�Jd,e,f����:");
	scanf("%lf %lf %lf",&d,&e,&f);
	result = abs(a)*floor(b)+pow(c,d)*sqrt(e)+log10(f);
	printf("result=%f",result);
	
	system("pause");
	return 0;
}
