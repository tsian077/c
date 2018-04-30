#include<stdio.h>
#include<stdlib.h>
int main () 
{
	int arr[10]={1,2,3,4,5,6,7,8,9,10};
	int i,total;
	for(i=0;i<10;i++)
	{
	
	 total += arr[i-1];
	 printf("陣列的總合為%d\n",total);}
	 
	 system("pause");
	 return 0;
}
