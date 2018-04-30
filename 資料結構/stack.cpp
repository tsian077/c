#include<stdlib.h>
#include<stdio.h>
typedef struct
{
	int top;
	int stackarray[100];
}stack;
void push(stack &s,int x)
{
	if(s.top==100)
	{
		printf("error:stackº¡·S³á");
	}
	else
	{
		s.stackarray[s.top]=x;
		s.top++;
	}
	
}
int pop(stack &s)
{
	if(s.top==0)
	{
		printf("error:stackªÅªºÀu");
	}
	else
	{
		s.top--;
		printf("%d",s.stackarray[s.top]);
	}
	return -1;
}
int main()
{
	stack st;
	st.top=0;
	push(st,10);
	pop(st);
	
	return 0;
}
