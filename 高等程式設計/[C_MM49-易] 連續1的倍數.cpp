#include<iostream>

using namespace std;

int main()
{
int n;//測資數 
long long int j=1;//被除數 
int count=1;//計算1個數 
int input=0;//輸入的樹 
cin>>n;
for(int i=0;i<n;i++)
{
	cin>>input;
	for(;(j%=input)!=0;count++)
	{
		j=(j*10)+1;
		/*if(j%input!=0)
		{
			j=(j*10)+1;
			count++;
		}
		else
		{
			break;
		}*/
	}
	/*while(j%input!=0)
	{
	j=(j*10)+1;
	count++;
	}*/
	cout<<count<<endl;
	count=1;
	j=1;
	
		
	
	
}


//return 0;
} 
