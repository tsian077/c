#include<stdio.h>
#include<stdlib.h>

int main (){
	int i=0,a=0,b=0,c=0;
     int tk;
while(i<10){

	
	printf("<1>�p��\n<2>�p��\n<3>�p�v\n");
	printf("�ЧA�벼");
    scanf("%d",&tk);
	if(tk==1)a++;
	else if(tk==2)b++;
	else if(tk==3)c++;
	printf("�p��%d\n�p��%d\n�p�v%d\n",a,b,c);
	
	
	i++;
}
	
	
	
	system("pause");
	return 0;
}
