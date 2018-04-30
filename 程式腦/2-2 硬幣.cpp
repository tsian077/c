#include<iostream>

using namespace std;
const int v[6]={1,5,10,50,100,500};

int solve(int *c,int A)
{
	int ans=0;
	for(int i=5;i>=0;i--){
		int t=min(A/v[i],*c);//¥Î¤F´XªTµw¹ô
		A -= t * v[i];
		ans += t; 
	}
	return ans;
}
int main(void)
{
 int c[6];
 int A;
 for(int i=0;i<=5;i++){
 	scanf("%d",&c[i]);
 }
 scanf("%d",&A);
 solve(c ,A);
 
	
} 

