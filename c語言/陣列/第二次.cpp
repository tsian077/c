#include<stdio.h>
#include<stdlib.h>
int main(){
    int A[3][3]={1,2,3,4,5,6,7,8,9};
    int *AT[3]=&A[0][0];
    int i,j;
    
    
    printf("***********¦C¦L­ì©lA¯x°}***********\n");
    for(i=0;i<3;i++){
        for(j=0;j<3;j++)
        printf("A[%d][%d]=%d\n",i,j,A[i][j]);             
                     }
                     
    printf("**********¦C¦LÂà¸m«áAT¯x°}**********\n");
    for(i=0;i<3;i++){
        for(j=0;j<3;j++)
        printf("AT[%d][%d]=%d\n",i,j,AT[i][j]);             
                     }
    
    
    
    system("pause");
    return 0;
    }
