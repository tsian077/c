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
  printf("�п�J�Ĥ@�Ӷꪺ���(x,y):");
  scanf("%d %d",&a->x,&a->y);
  printf("�п�J�Ĥ@�Ӷꪺ�b�|:");
  scanf("%d",&a->radius);
  a->next = NULL;
  b=(struct circle *)malloc(sizeof(struct circle));
  printf("�п�J�ĤG�Ӷꪺ���(x,y):");
  scanf("%d %d",&b->x,&b->y);
  printf("�п�J�ĤG�Ӷꪺ�b�|:");
  scanf("%d",&b->radius);
  b->next=NULL;
  a->next =b;
  c=(struct circle *)malloc(sizeof(struct circle));
  printf("�п�J�ĤT�Ӷꪺ���(x,y):");
  scanf("%d %d",&c->x,&c->y);
  printf("�п�J�ĤT�Ӷꪺ�b�|:");
  scanf("%d",&c->radius);
  c->next=NULL;
  b->next=c;
  
  current=a;
  int i=1;
  while(current != NULL){
  	printf("��%d�Ӷꪺ��߬�(%d %d),�b�|��%d\n",
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
