#include<stdio.h>
#include<stdlib.h>

int main (){
  int arr[3][3]={{1,2,3},{4,5,6},{7,8,9}};
  int arr2[3][3]={{1,4,7},{2,5,8},{3,6,9}};
  
 
  int i,j;
   
  printf("¦C¦L­ì©lA¯x°}\n");
   for(i=0;i<3;i++){
   
   for(j=0;j<3;j++){
   
  printf("arr[%d][%d]=%d\n",i,j,arr[i][j]);

}
}
printf("¦C¦L·sªºA¯x°}\n");
for(i=0;i<3;i++){
   for(j=0;j<3;j++){
 
 printf("arr[%d][%d]=%d\n",i,j,arr2[i][j]);
}
}
	
	system("pause");
	return 0;
}
