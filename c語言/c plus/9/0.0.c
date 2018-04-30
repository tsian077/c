#include<stdio.h>
#include<stdlib.h>

int main(){
	int i,c[6];
	c[0]=c[1]=c[2]=c[3]=c[4]=c[5]=0;
	
	while(c[0]==c[1]&&
	      c[1]==c[2]&&
	      
	      c[3]==c[4]&&
	      c[4]==c[5])
	{
		for(i=0;i<6;i++){
			if(i%2==0)//讓數字更亂
			c[i]=rand()%20+rand()%29+2;
			else
			c[i]=rand()%49+1; 
			
		}
	}
	printf("數字:");
	for(i=0;i<6;i++)
	printf(" %d",c[i]);
	
	
	system("pause");
	return 0;
	
}
