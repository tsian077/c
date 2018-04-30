#include<stdio.h>
#include<stdlib.h>
int myStrlen(const char*);
int main(){
   char str1[10]={'s','t','r','i','n','g','\0'};
   char str2[]="Null array size";
   char *str3="Pointer view";
   char str4[80];
   int i=0;
   printf("Length of String <%s> is %u\n",str1,myStrlen(str1));
   printf("Length of String <%s> is %u\n",str2,myStrlen(str2));
   printf("Length of String <%s> is %u\n\n",str3,myStrlen(str3));
   printf("Enter a string : ");
   gets(str4);
   printf("\n\nLength of string <%s> is %u\n",str4,myStrlen(str4));
   
    
    system("pause");
    return 0;
    }
int myStrlen(const char *str){
    int count;
    for(count=0;*str!='\0';count++)str++;
	
	


    return count;   
    
    }
