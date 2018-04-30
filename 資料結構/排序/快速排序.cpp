#include<iostream>
#include<algorithm>
using namespace std;

void quicksort(int list[],int left,int right)
{
	int pivot,i,j;
	
	if(left<right)
	{
		i=left;
		j=right+1;
		pivot=list[left];
		do
		{
			do
			{
				i++;
			}
			while(list[i]<pivot);
			do
			{
				j--;
			}
			while(list[j]>pivot);
			if(i<j)
			{
				swap(list[i],list[j]);
			}
			
		}while(i<j);
		swap(list[left],list[j]);
		quicksort(list,left,j-1);
		quicksort(list,j+1,right);
		
	}
}
int main()
{
	//step1:����ܤ@�Ӹ�Ƨ@���w���I 
	//setp2:�C�B�z�@�^�A�Ҧ���w���I�p�������Ҧb�w���I������A
	//		�Ҧ���w���I�j���������b�w���I���k��
	//setp3:�A�w���I���䪺�����P�A�w���I�k�䪺�������O�I�H�ۦP
	//	  	���B�z���������ƱƧǧ��n����
	//      �������Ӫv���k�N�j���D�Ƥp 
	int list[10]={26,5,37,1,61,11,59,15,48,19};
	quicksort(list,0,9);
	for(int i=0;i<10;i++)
	{
		cout<<list[i]<<" ";
	} 
	




	return 0;
} 
