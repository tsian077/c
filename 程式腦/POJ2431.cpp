#include<iostream>
#define MAX 100000 
using namespace std;
int L,P,N;
int A[MAX+1],B[MAX+1];
void solve();
int main()
{
	solve();
	
	
	
	return 0;
}
void solve()
{
  cout<<"輸入道路距離";
  cin>>L;
  cout<<"輸入幾個加油站";
  cin>>N;
  cout<<"輸入一開始的汽油";
  cin>>P; 
  cout<<"輸入加油站的位置";
  for(int i=0;i<N;i++) cin>>A[i];
  cout<<"輸入加油站的油量";
  for(int i=0;i<N;i++) cin>>A[i];
  cout<<A[N];
  //將加油站追加在終點 
  A[N]= L;
  B[N]= 0;
  N++;
  
  
  
} 
