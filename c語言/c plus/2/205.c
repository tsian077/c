#include<stdio.h>
#include<stdlib.h>


int main (){
  int i,num;
  int num1=0,num2=0,num3=0,num4=0,others=0;
  
  for(i=0;i<10;i++){
   printf("\n班長候選人如下:\n1:小王\n2:小李\n3:小蔡\n4:小陳\n");
    printf("請問你要選哪位候選人:(1-4):");
	scanf("%d",&num);
	switch(num){
		case 1:
			num1++;
			break;
		case 2:
			num2++;
			break;
		case 3:
			num3++;
			break;
		case 4:
			num4++;
			break;
		default:
			printf("你輸入的號碼不正確\n");
			others++;
			break;
		
	}  	
     printf("目前得票數:小王:%d,小李:%d,小蔡:%d,小陳:%d,廢票%d",num1,num2,num3,num4,others);
  }
  
system("pause");
return 0;
}

