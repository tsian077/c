#include<stdio.h>
#include<stdlib.h>

int main () {
	
	struct company{
		char name[10];
		double hour;
		double pay;
	};
	struct company employee[5];
	double salary[5];
	int i;
	
	for(i=0;i<5;i++){
		
		printf("�п�J��%d����u���m�W",i+1);
		scanf("%s",&employee[i].name);
		printf("�п�J��%d����u���u�@�ɼ�",i+1);
		scanf("%lf",&employee[i].hour);
		printf("�п�J��%d����u���@�p�ɪ��u��",i+1);
		scanf("%lf",&employee[i].pay);
		
	}
	
	for(i=0;i<5;i++){
		salary[i]=employee[i].hour*employee[i].pay;
		printf("%-10s���~����%.2lf\n",
		employee[i].name,salary[i]);
	}
system("pause");
return 0;
}
