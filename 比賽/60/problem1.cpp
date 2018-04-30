#include<iostream>

using namespace std;

int main()
{
	int n;
	cin>>n;
	for(int i=0;i<n;i++)
	{
		int ans;
		cin>>ans;
		
		if(ans%400==0)
		{
			cout<<"Bissextile Year"<<endl; 
		}
		else if(ans%4==0)
		{
			if(ans%100==0)
			{
				cout<<"Common Year"<<endl;
			}
			else
			{
				cout<<"Bissextile Year"<<endl; 
			}
			
		}
		
		else 
		{
			cout<<"Common Year"<<endl;
		}	
	}
}
