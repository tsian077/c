#include<cstdio>
using namespace std;
//const 使變數無法被修改 
const int MAX_N = 50;
int main()
{
	int n,m,k[MAX_N];
	
	//從標準輸入讀取輸入
	scanf("%d %d",&n,&m);
	for(int i=0;i<n;i++)
	{
		scanf("%d",&k[i]);
	} 
	
	//代表能否找到和為m的組合之旗標 
	bool f= false;
	
	
	//透過四重迴圈測試所有狀況
	for(int a=0;a<n;a++){
		for(int b=0;b<n;b++){
			for(int c=0;c<n;c++){
				for(int d=0;d<n;d++){
					if(k[a]+k[b]+k[c]+k[d]==m){
						f=true;
					}
				}
			}
		}
	} 
	
	if(f)puts("Yes");
	else puts("No");
	
	return 0;
}
