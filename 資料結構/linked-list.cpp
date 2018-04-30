#include<stdlib.h>
#include<stdio.h>
typedef struct
{
	int element;
	//指標 
	stackelement *next;
}stackelement;
void push(int stackin,stackelement **st)
{
	//用來儲存暫存值; 
	stackelement *temp;
	temp=(stackelement *)malloc(sizeof(stackelement));//設初值
	if(temp==0)
	{
		printf("裡面是空的，所以不會給記憶體空間");
	}
	temp->element=stackin;
	temp->next=*st;
	*st=temp;
}
int pop(stackelement  **st)
{
	int answer;
	stackelement *temp;
	if(*st==0)
	{
		printf("error");
	}
	else
	{
		temp=*st;
		answer=temp->element;
		*st =temp->next;
		free(temp);
		return answer;
	}
}
int main()
{
	stackelement *stack;
	stack=NULL;
	push(10,&stack);
	
}
