#include<stdio.h>
#include<stdlib.h>
void tk(int *,int *,int *);
void pb(int [][3]);

int main (){
	int i,j;
	int arr[3][3];
	int arr2[3][3];
	int arr3[3][3];
	int number=0;
	printf("½Ð¿é¤J¯x°}¤@...\n");
	for(i=0;i<3;i++){
		for(j=0;j<3;j++){
			printf("arr[%d][%d]",i,j);
			scanf("%d",&arr[i][j]);
			
		}
	}

	printf("½Ð¿é¤J¯x°}¤G...\n");
	for(i=0;i<3;i++){
		for(j=0;j<3;j++){
				printf("arr2[%d][%d]",i,j);
			scanf("%d",&arr2[i][j]);
			
		}
	}
	
tk(arr[0],arr2[0],arr3[0]);
printf("\n¯x°}1:\n");
pb(arr);
printf("\n¯x°}2:\n");
pb(arr2);
printf("\n¯x°}3:\n");
pb(arr3);

	
	
	system("pause");
	return 0;
	
} 
void tk(int* arr,int* arr2,int* arr3){
	int i,j;
	for(i=0;i<9;i++){
		
			*(arr3+i)=*(arr+i)**(arr2+i);
			
	
	}
	

}

void pb (int arr[][3]){
		int i,j,a;
	for(i=0;i<3;i++){
		for(j=0;j<3;j++){

		    printf(" %2d",arr[i][j]);
		   	}	
		    printf("\n");
				
			
		
	}
	
}



