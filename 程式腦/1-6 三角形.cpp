#include<iostream>

using namespace std;

const int MAX_N = 50;

int main()
{
  int n;
  int a[MAX_N];
  int ans = 0;//����
  cin>>n;
  for(int i=0;i<n;i++)
  {
  	cin>>a[i];
  }
  for(int i=0;i<n;i++){
  	for(int j=i+1;j<n;j++){
  		for(int k=j+1;k<n;k++){
  			int len = a[i]+a[j]+a[k];  //�P�� 
  			int ma = max(a[i],max(a[j],a[k]));  //�̪��Τl������ 
  			int rest = len - ma;
  			if(ma<rest){
  				ans = max(ans,len);
			  }
		  }
	  }
  }
  
cout<<ans;

return 0;
}

 
