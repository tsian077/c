#include<stdio.h>
#include<stdlib.h>
#include<stdlib.h>

int main (){
	
	FILE *fptr;
	char ch;
	fptr=fopen("character.dat","w");
	printf("�п�J�@�r��:");
	scanf("%c",&ch);
	
	//�N�@��h�l���r���ᱼ
	while(getchar()!='\n'){
		continue;
	}
	
	while(ch!='*'){
		fprintf("%c",ch);
		printf("�п�J�@�r��:");
		scanf("%c",&ch);
		//�N�@��h�l���r���ᱼ
		while(getchar()!='\n'){
			continue;
		} 
		}
		
    fclose(fptr);
	fptr=fopen("character.dat","r");
	printf("\n�H�U�O�A��J�����:\n");
	while(fscanf("%c",&ch)==EOF){
	printf("%3c\n",&ch);
	}
system("pause");
return 0;
}
