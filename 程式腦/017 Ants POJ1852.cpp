#include<iostream>

using namespace std;

int main()
{
	int L,n;
	int x[100];
	cin>>L;
	cin>>n;
	for(int i=0;i<n;i++)
	{
		cin>>x[i];
	}
	int minT,maxT=0;
	//�p��̵u�ɶ� 
	for(int i=0;i<n;i++)
	{
		//min���C�@�����Ʊ��U�h���̤p�ɶ� max�Ψӭp��̫�@�����Ʊ��U�h; 
		minT=max(minT,min(x[i],L-x[i]));
	}
	//�p��̪��ɶ� 
	for(int i=0;i<n;i++)
	{
		//min���C�@�����Ʊ��U�h���̤p�ɶ� max�Ψӭp��̫�@�����Ʊ��U�h; 
		maxT=max(minT,max(x[i],L-x[i]));
	}
	cout<<minT<<maxT;
	
	
	system("pause");
}
