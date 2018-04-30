#include<stdio.h>
#include<stdlib.h>
void add(int []);
int main () {
    
    int  arr[3][3];
    int i,j;
    
    
    for(i=0;i<3;i++){
     for(j=0;j<3;j++){
      printf("½Ð¿é¤Jarr[%d][%d]ªº­È:",i,j);
      scanf("%d",&arr[i][j]);
      
      }
     
      }
      add(arr[0]);
        
      for(i=0;i<3;i++){
     for(j=0;j<3;j++){
      
             printf("arr[%d][%d]=%d",i,j,arr[i][j]);
             }
             printf("\n");
             }
   
      system("pause");
      return 0;
}


void add(int arr[]){
   int i;
   for(i=0;i<9;i++)
   arr[i] =arr[i]+1;
}

