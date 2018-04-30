#include<stdio.h>
#include<stdlib.h>
void star(void);
int main (){
	printf("呼叫印出星星的函數!!!\n");
    star();
	
	printf("我喜歡學C程式語言\n");
	star();
	printf("結束函式的呼叫!!!");
	
	system("pause");
	return 0;
	
}

void star(void){
	int i;
	for(i=1;i<=30;i++){
		printf("*");
		
	}
printf("\n");
}
