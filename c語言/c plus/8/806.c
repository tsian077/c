#include<stdio.h>
#include<stdlib.h>
void printfStar(int);
void multiply(int);
int main (){
	int m,s;
	printf("請輸入你要幾乘幾的乘法表<最多十個>:");
	scanf("%d",&m);
	printf("請問你要多少個星星");
	scanf("%d",&s);
	printfStar(s);
	if(m<10)
	multiply(m);
	printfStar(s);
	
	
	
	
	system("pause");
	return 0;
} 
void multiply (int n){
	int i,j;
	for(i=1;i<n;i++){
		for(j=1;j<n;j++){
			printf("%d * %d=%2d",i,j,(i*j));
			
		}
    printf("\n");	 
 	 }
	
}




void printfStar(int m){
	
	int i;
	for(i=0;i<m;i++)
	printf("*");
	printf("\n");
	
	
}
