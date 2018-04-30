#include<stdio.h>
#include<stdlib.h>



struct circle{
	
	int x,y;
	int radius;
	struct circle* next;
};

int main () {
  struct circle *a,*b,*c,*current;
  
  a = (struct circle *)malloc(sizeof(struct circle));
  printf("請輸入第一個圓的圓心(x,y):");
  scanf("%d %d",&a->x,&a->y);
  printf("請輸入第一個圓的半徑:");
  scanf("%d",&a->radius);
  a->next = NULL;
  b=(struct circle *)malloc(sizeof(struct circle));
  printf("請輸入第二個圓的圓心(x,y):");
  scanf("%d %d",&b->x,&b->y);
  printf("請輸入第二個圓的半徑:");
  scanf("%d",&b->radius);
  b->next=NULL;
  a->next =b;
  c=(struct circle *)malloc(sizeof(struct circle));
  printf("請輸入第三個圓的圓心(x,y):");
  scanf("%d %d",&c->x,&c->y);
  printf("請輸入第三個圓的半徑:");
  scanf("%d",&c->radius);
  c->next=NULL;
  b->next=c;
  
  current=a;
  int i=1;
  while(current != NULL){
  	printf("第%d個圓的圓心為(%d %d),半徑為%d\n",
	  i,current->x,current->y,current->radius);
	  i ++;
	  current=current->next;
  }	
  free(a);
  free(b);
  free(c);
  
  
  system("pause");
  return 0;
}
