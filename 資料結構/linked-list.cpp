#include<stdlib.h>
#include<stdio.h>
typedef struct
{
	int element;
	//���� 
	stackelement *next;
}stackelement;
void push(int stackin,stackelement **st)
{
	//�Ψ��x�s�Ȧs��; 
	stackelement *temp;
	temp=(stackelement *)malloc(sizeof(stackelement));//�]���
	if(temp==0)
	{
		printf("�̭��O�Ū��A�ҥH���|���O����Ŷ�");
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
