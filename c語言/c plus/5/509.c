#include<stdio.h>
#include<stdlib.h>

int main () {
   
   struct triangle{
   	   int width;
   	   int height;
   };


    struct triangle*ptri;
    double area;
    
    ptri = malloc(sizeof(struct triangle));
    
    printf("�п�J�T���Ϊ������h��:");
    scanf("%d",&ptri->width);
    printf("�п�J�T���Ϊ������h��:");
    scanf("%d",&ptri->height);
    
    area = (ptri->width*ptri->height)/2.;
    printf("�T���Ϊ����n��%.2f\n",area);
    
    system("pause");
    return 0;
}
