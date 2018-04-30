#include<stdlib.h>
#include<stdio.h>
typedef struct
{
	int top;
	int stackelement[100];
}stack;
void push(int stackin,stack &st)
{
	if(st.top==100)
	{
		printf("º¡·S");
	}
	else
	{
		st.stackelement[st.top]=stackin;
		st.top++;
	}
}
void pop(stack &st)
{
	if(st.top==0)
	{
		printf("ªÅ·S");
	}
	else
	{
		st.top--;
		printf("%d",st.stackelement[st.top]);
	}
}
int main(){
	stack st;
	st.top=0;
	push(10,st);
	push(20,st);
	pop(st);
} 
