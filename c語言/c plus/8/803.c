#include<stdio.h>
#include<stdlib.h>

int main (){
	int i=0,a=0,b=0,c=0;
     int tk;
while(i<10){

	
	printf("<1>小蔡\n<2>小王\n<3>小史\n");
	printf("請你投票");
    scanf("%d",&tk);
	if(tk==1)a++;
	else if(tk==2)b++;
	else if(tk==3)c++;
	printf("小蔡%d\n小王%d\n小史%d\n",a,b,c);
	
	
	i++;
}
	
	
	
	system("pause");
	return 0;
}
