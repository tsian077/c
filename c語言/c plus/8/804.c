#include<stdio.h>
#include<stdlib.h>
double average(double*,int);
int main (){
	double data[6];
	int i;
	for(i=0;i<6;i++){
		printf("�п�J��%d�ӴT�I��",i+1);
		scanf("%lf",&data[i]);
		
	}
printf("\n�A��J���}�C�Ȧp�U\n");
for(i=0;i<6;i++)
printf("\ndata[%d]:%.2lf",i,data[i]);
printf("\n����:%.2lf",average(data,6));

		
	system("pause");
	return 0;
}


double average(double*arr2,int n){
   double tot=0;
   int	i;
  for(i=0;i<n;i++)
  tot+=*(arr2+i);
  
  tot/=n;
  return tot;

} 
