#include<stdio.h>
#include<stdlib.h>



int main (){
 
 struct circle{
 
  int x,y;
  double radius;
 };

  double area;
  struct circle c1={10,10,2.5};
  struct circle *pc=&c1;
  
  area=pc->radius*pc->radius*3.14159;
  
  printf("���ꪺ��߬�(%d,%d),���n��%.2f\n",pc->x,pc->y,area);
  
  system("pause");
  return 0;
  
};  
