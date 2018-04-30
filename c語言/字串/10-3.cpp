#include<stdio.h>
#include<stdlib.h>
int main(){
    char str1[30]={0};
    printf("Please enter a string less than 30 characters:");
    gets(str1);
    puts("The string is");
    printf("%s\n",str1);
    
    system("pause");
    return 0;
    }
