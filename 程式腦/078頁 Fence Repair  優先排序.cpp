#include<iostream>
#include<queue>
#include<vector>
using namespace std;
int N=3;
int L[3]={8,5,8};
int main()
{
	int ans;
	//優先排序 從小到大 greater從小到大 less從大到小 
	priority_queue<int,vector<int>, greater<int> > que;
	for(int i=0;i<N;i++)
	    que.push(L[i]);
	
	
	//再版子剩一塊前不段套用
	while(que.size()>1)
	{
		int l1,l2;
		l1= que.top();
		que.pop();
		l2=que.top();
		que.pop();
		
		//將他們合併
		ans += l1+l2;
		que.push(l1+l2); 
	} 
	
	cout<<ans; 
	
	return 0;
}

