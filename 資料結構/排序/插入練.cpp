#include<iostream>

using namespace std;

int main()
{
	int temp;
	int i,j;
	int ans[10]={6,9,26,2,8,16,89,16,1,10};
	for(int i=1;i<10;i++)
	{
		int next; //從1開始 因為第0沒有辦法跟其他的比較 
		next=ans[i];	//先取出尚未排序的第一筆資料 
		for(j=i-1;j>=0 && next<ans[j];j--) //如果尚未排序的第一筆 
		{								   // 比前一筆還小就把她後移 
			ans[j+1]=ans[j];			   //在跟前前一比去比
										   // 如果又更小就在換 
		}
		ans[j+1]=next;					  //做完上面迴圈把值插入等於 
										  //排序完 
	}
	for(int i=0;i<10;i++)
	{
		cout<<ans[i]<<" ";
	} 

	
}
