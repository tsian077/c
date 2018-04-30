#include<stdio.h>
#include<stdlib.h>

int main (){
    int score,adjust;
    printf("請輸入分數:");
    scanf("%d",&score);
    if(score>=60){
    	adjust=score+10;
	}
    else{
    	adjust=score+5;
    	
	}
    printf("調整後的分數為%d\n",adjust);
    
    system("pause");
    return 0;
}
