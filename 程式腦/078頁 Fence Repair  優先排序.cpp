#include<iostream>
#include<queue>
#include<vector>
using namespace std;
int N=3;
int L[3]={8,5,8};
int main()
{
	int ans;
	//�u���Ƨ� �q�p��j greater�q�p��j less�q�j��p 
	priority_queue<int,vector<int>, greater<int> > que;
	for(int i=0;i<N;i++)
	    que.push(L[i]);
	
	
	//�A���l�Ѥ@���e���q�M��
	while(que.size()>1)
	{
		int l1,l2;
		l1= que.top();
		que.pop();
		l2=que.top();
		que.pop();
		
		//�N�L�̦X��
		ans += l1+l2;
		que.push(l1+l2); 
	} 
	
	cout<<ans; 
	
	return 0;
}

