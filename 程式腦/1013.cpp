#include<stdio.h>
#include<stdlib.h>
#include<iostream>
#include<string.h> 
const int MAX_N=10;
using namespace std;
char s[MAX_N];
void solve()
{
	
}


int main ()
{
	int h=0;
    char a[10];
    char s[10];
    printf("��J:");
    scanf("%s",&a);
    printf("��J�A�Q�첾����:");
    scanf("%d",&h);
    int len = strlen(a); 
     
    for(int i=0;i<len;i++)
	{
		a[i]+=h;
	}
   for(int i=0;i<len;i++)
	{
	printf("%c",a[i]);
	}
  
    
    
    
    return 0;
}

