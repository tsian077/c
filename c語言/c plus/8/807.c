#include<stdio.h>
#include<stdlib.h>
void multiply(int);
void printStar(int);
int main (){
	int m,s;
	printf("�п�J�A�n�X���X�����k��");
	scanf("%d",&m);
	printf("�п�J�A�n�h�֭ӬP�P");
	scanf("%d",&s);
	printStar(s);
	if(m<=10)
	multiply(m);
	printStar(s);
	
  system("pause");
  return 0;
}
void multiply(int n){
	int i,j;
	
	for(i=1;i<=10;i++)
	{
		for(j=1;j<=10;j++){
			
			printf("%4d",(i*j));
			
		}
	  printf("\n");
	}
}
void printStar(int n){
  int i;
  for(i=0;i<n;i++)
  printf("*");
  printf("\n");

}
