#include<stdio.h>
#include<stdlib.h>
void printfStar(int);
void multiply(int);
int main (){
	int m,s;
	printf("�п�J�A�n�X���X�����k��<�̦h�Q��>:");
	scanf("%d",&m);
	printf("�аݧA�n�h�֭ӬP�P");
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
