#include<iostream>

using namespace std;
void merge(int list[],int sorted[],int i,int m,int n)
{
	int j,k,t;
	j=m+1; //index for the second sublist
	k=i;
	while(i<=m && j<=n)
	{
		if(list[i]<=list[j])
		{
			sorted[k++]=list[j++];
		} 
	}
	if(i>m)
	{
		/*sorted[k],...,sorted[n]=list[j],...list[n]*/
		for(t=j;t<=n;t++)
		{
			sorted[j+t-j]=list[t];
		}
	}
	else
	{
		/*sorted[k],....sorted[n]=list[i],....list[m]*/
		for(t=i;t<=m;t++)
		{
			sorted[k+t-i]=list[t];		
		}
	}
}
void merge_pass(int list[],int sorted[],int n,int length)
{
	int i,j;
	for(i=0;i<=n-2 *length;i+=2*length)
	{
		merge(list,sorted,i,j+length-1,i+2*length-1);
	}
	if(i+length<n)
	{
		merge(list,sorted,i,i+length-1,n-1);
	}
	else
	{
		for(j=i;j<n;j++)
		{
			sorted[j]=list[j];
		}
	}
	
}

int main()
{
	int length=1; //current length being merged
	int extra[10];
	int n=sizeof(extra)/4;
	while(length<n)
	{
		merge_pass(list,extra,n,length);
		length*=2;
		merge_pass(extra,list,n,length);
		length*=2;
		
		
	}
	
	
}
