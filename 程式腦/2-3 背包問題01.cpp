#include<stdio.h>
#include<stdlib.h>
#include<iostream>
using namespace std;
#define MAX 100
int n,W;
int w[MAX],v[MAX];


int rec(int i,int j)
{
	int res;
	if(i==n){
		//�w�g�S�����~�F
		res==0; 
	}
	else if(j<w[i])
	{
		//�]���W�L�̤j���q�A�ҥH���L 
		res= rec(i+1,j);
	}
	else
	{
		//���O���տ�ܪ����p�P����ܪ����p 
		res=max(rec(i+1,j),rec(i+1,j-w[i])+v[i]);
	}
	return res;
}
void solve()
{
	printf("%d\n",rec(0,W));
}
int main ()
{
	 cout<<"��Jn�Ӫ��~";
	 cin >>n;
	 cout<<"��J(w,v)";
	 for(int i=0;i<n;i++)
	 {
	 	cin>>w[i];
	 	cin>>v[i];
	 } 
	 cout<<"��J�̤j";
	 cin >>W;
	solve();
	return 0;
	
} 
