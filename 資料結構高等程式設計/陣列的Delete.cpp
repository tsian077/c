#include<iostream>

using namespace std;

int main()
{
	int arr[10]={0,1,2,3,4,5,6,7,8,9};
	for(int j=6;j<9;j++)
	{
	arr[j]=arr[j+1];	//arr[9]=arr[8] arr[8]=arr[7] arr[6]=arr[5]
	}	
	//arr[6]=67;
	for(int i=0;i<10;i++)
	{
		cout<<i<<" "<<arr[i]<<endl;
	}
	
	
	return 0;
}
