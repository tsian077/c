#include<iostream>

using namespace std;



int main(){
	int n;
	int a=1;
	cin >> n;
     for(int i=0;i<n;i++)
	 {
          
          	int b=(a-1)/2;
	        int c=(a-1)/3;
	        if(b==0 || c==0)
			{
				
				cout<<a;
				cout<<"a+1";
				a++;
			}
			else{
				cout<<"a+1 & i-1";
				a++;
			
			}
			  		   	      		  
	 }
   
	return 0;
	system("pause");
}

