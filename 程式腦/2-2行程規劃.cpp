#include<iostream>
//�ΨӨϥ�sort() 
#include<algorithm>
const int MAX_N=100000;
using namespace std;
int n,S[MAX_N],T[MAX_N];

pair<int, int> itv[MAX_N];
void solve(int n,int *S,int *T)
{
	//�H�r�嶶�Ǥ��pair
	//�ѩ�Q�H�����ɶ������ߨӱƧǡA�ҥH�NT��Jfirst�BS��Jsecond
	for(int i=0;i<n;i++)
	{
		itv[i].first=T[i];
		itv[i].second = S[i]; 
	} 
	sort(itv,itv+n);
	
	
	//t�O�̫��ܪ��u�@�������ɶ�
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
	cout<<"�п�JN="<<endl;
	cin >>n;
	cout<<"�п�JS="<<endl;
	for(int i=0;i<n;i++){
		scanf("%d",&S[i]);
	}
    cout<<"�п�JT="<<endl;
	for(int i=0;i<n;i++){
		scanf("%d",&T[i]);
	}
	solve(n,S,T);

return 0;
}

