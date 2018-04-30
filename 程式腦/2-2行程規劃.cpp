#include<iostream>
//用來使用sort() 
#include<algorithm>
const int MAX_N=100000;
using namespace std;
int n,S[MAX_N],T[MAX_N];

pair<int, int> itv[MAX_N];
void solve(int n,int *S,int *T)
{
	//以字典順序比較pair
	//由於想以結束時間的早晚來排序，所以將T放入first、S放入second
	for(int i=0;i<n;i++)
	{
		itv[i].first=T[i];
		itv[i].second = S[i]; 
	} 
	sort(itv,itv+n);
	
	
	//t是最後選擇的工作的結束時間
	int ans=0,t=0; 
	for(int i=0;i<n;i++)
	{
		if(t<itv[i].second)
		{
			ans++;
			t=itv[i].first;
		}
	}
	cout<<ans<<endl;
}
int main()
{
	cout<<"請輸入N="<<endl;
	cin >>n;
	cout<<"請輸入S="<<endl;
	for(int i=0;i<n;i++){
		scanf("%d",&S[i]);
	}
    cout<<"請輸入T="<<endl;
	for(int i=0;i<n;i++){
		scanf("%d",&T[i]);
	}
	solve(n,S,T);

return 0;
}

