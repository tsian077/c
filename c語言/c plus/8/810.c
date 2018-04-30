#include<stdio.h>
#include<stdlib.h>
void tk(int*,int*,int*);
void pb(int[][3]);
int main (){
	int arr1[3][3];
	int arr2[3][3];
	int arr3[3][3];
	int i,j;
	
	/*¯x°}1*/ 
	printf("½Ð¿é¤J¯x°}1...\n");
	for(i=0;i<3;i++)
 
	for(j=0;j<3;j++)	
  {
	
	printf("arr[%d][%d]",i,j);
	scanf("%d",&arr1[i][j]);
	
  }  

   /*¯x°}2*/
  	printf("½Ð¿é¤J¯x°}2...\n");
	for(i=0;i<3;i++)
 { 
	for(j=0;j<3;j++)	
  {
	
	printf("arr[%d][%d]",i,j);
	scanf("%d",&arr2[i][j]);
	
  }  
 }
 tk(arr1[0],arr2[0],arr3[0]);
 
 printf("\n¯x°}1\n");
 pb(arr1);
  printf("\n¯x°}2\n");
 pb(arr2);
  printf("\n¯x°}3\n");
 pb(arr3);
 
 
 system("pause");
 return 0;
   
}

void tk(int *a1,int *a2,int *a3 ){
	
	int i;
	for(i=0;i<(9);i++){
		*(a3+i)=*(a1+i)**(a2+i);
		
	}
	
	
}

void pb(int d[][3]){
	int i,j,c=0;
	for(i=0;i<3;i++){
	
		for(j=0;j<3;j++)
			
			printf(" %2d",d[i][j]);
			printf("\n");
			
			
			
			
		}
	
	
	
}



