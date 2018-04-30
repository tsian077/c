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
	//step1:先選擇一個資料作為定界點 
	//setp2:每處理一回，所有比定界點小的元素皆在定界點的左邊，
	//		所有比定界點大的元素都在定界點的右邊
	//setp3:再定界點左邊的元素與再定界點右邊的元素分別施以相同
	//	  	的處理直到全部資料排序完好為止
	//      類似分而治之法將大問題化小 
	int list[10]={26,5,37,1,61,11,59,15,48,19};
	quicksort(list,0,9);
	for(int i=0;i<10;i++)
	{
		cout<<list[i]<<" ";
	} 
	




	return 0;
} 
