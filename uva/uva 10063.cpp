#include<iostream>
#include<vector>
using namespace std;

int main()
{
	unsigned long long int n;
	
	
	vector<unsigned long long int> aa;
	
	while(cin>>n)
	{
		if(n==0)
		{
			break;
		}
		else
		{
			for(int i=9;i>=0;i--)
			{
				unsigned long long int temp=((n*10)-i)%9;
				if(temp==0)
				{
					aa.push_back(((n*10)-i)/9);
				}
			}
			for(int i=0;i<aa.size()-1;i++)
			{
				cout<<aa[i]<<" ";	
			}
			cout<<aa[aa.size()-1]<<endl;
			aa.clear();
		}
		
	}
		
			
			
	
	
}
