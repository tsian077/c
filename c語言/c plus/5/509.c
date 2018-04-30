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
    
    printf("請輸入三角形的底為多少:");
    scanf("%d",&ptri->width);
    printf("請輸入三角形的高為多少:");
    scanf("%d",&ptri->height);
    
    area = (ptri->width*ptri->height)/2.;
    printf("三角形的面積為%.2f\n",area);
    
    system("pause");
    return 0;
}
