#include<iostream>
#define N 10

using namespace std;
int count [N+1];
int fab(int n)
{
	count[n]++;
	
	if(n==0 || n==1)
		return 1;
	else
		return (fab(n-1)+fab(n-2));
}
int main()
{
	for(int i=0;i<N;i++)
		count[i]=0;
		
	fab(N);
	
	for(int i=0;i<=N;i++)
		cout<<i<<" "<<count[i];
}
