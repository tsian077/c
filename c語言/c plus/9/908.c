#include<stdio.h>
#include<stdlib.h>
#include<time.h>
int main (){
	int i,j,a;
	
	srand(time(NULL));
	for(i=0;i<10;i++){
		for(j=0;j<10;j++){ 
			a=(rand()%1000)+1;
			printf(" %3d",a);
		} 
	 printf("\n");
} 
	
	system("pause");
	return 0;
} 
