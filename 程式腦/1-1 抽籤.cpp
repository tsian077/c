#include<cstdio>
using namespace std;
//const ���ܼƵL�k�Q�ק� 
const int MAX_N = 50;
int main()
{
	int n,m,k[MAX_N];
	
	//�q�зǿ�JŪ����J
	scanf("%d %d",&n,&m);
	for(int i=0;i<n;i++)
	{
		scanf("%d",&k[i]);
	} 
	
	//�N���_���M��m���զX���X�� 
	bool f= false;
	
	
	//�z�L�|���j����թҦ����p
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
