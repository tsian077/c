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
  cout<<"��J�D���Z��";
  cin>>L;
  cout<<"��J�X�ӥ[�o��";
  cin>>N;
  cout<<"��J�@�}�l���T�o";
  cin>>P; 
  cout<<"��J�[�o������m";
  for(int i=0;i<N;i++) cin>>A[i];
  cout<<"��J�[�o�����o�q";
  for(int i=0;i<N;i++) cin>>A[i];
  cout<<A[N];
  //�N�[�o���l�[�b���I 
  A[N]= L;
  B[N]= 0;
  N++;
  
  
  
} 
