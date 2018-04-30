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
		
		printf("請輸入第%d位員工的姓名",i+1);
		scanf("%s",&employee[i].name);
		printf("請輸入第%d位員工的工作時數",i+1);
		scanf("%lf",&employee[i].hour);
		printf("請輸入第%d位員工的一小時的工資",i+1);
		scanf("%lf",&employee[i].pay);
		
	}
	
	for(i=0;i<5;i++){
		salary[i]=employee[i].hour*employee[i].pay;
		printf("%-10s的薪水為%.2lf\n",
		employee[i].name,salary[i]);
	}
system("pause");
return 0;
}
