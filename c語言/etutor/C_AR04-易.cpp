#include<iostream>
using namespace std;
#define max 100
int main ()
{
	 int s=0;
	 
	 cin >> s;
	 
while(s!=0)
{
	int n,m=0;
	cin >> n;
	cin >> m;
	int a[max+2][max+2];
    int up=0,down=0,left=0,right=0;
	 for(int i=0;i<n;i++)
	 {
	 	for(int j=0;j<m;j++)
		 {
	 	   cin >> a[i][j];
	       	 
		 	
		 }	
		 cout << endl;
	 	
	 }
	
	
	
	for(int i=0;i<n;i++)
	 {
	 	for(int j=0;j<m;j++)
		{
	 	   if(a[i][j]==1)
			{
				up=a[i-1][j];
				down=a[i+1][j];
				left=a[i][j-1];
				right=a[i][j+1];
				if(up==0||down==0||left==0||right==0)
				{
					cout<<"0 ";
				}
				else
				{
					cout<<"_ ";
				}
			}
			else
			{
				cout<<"_ ";
			}
	 	   
		}
		
		   cout<<endl; 
	}
		   
		 	
	
		
	 if(s!=0)
	    cout<<endl;	
	 	
	 
	 s--;
}
	 
	 return 0;
	 
}
