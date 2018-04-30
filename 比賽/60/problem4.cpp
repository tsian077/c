#include<iostream>
#include<stdlib.h>
#include<sstream>
#include<vector>
#include<string.h>
using namespace std;

int gcd(int m,int n)
{
	while(n!=0)
	{
		int r= m%n;
		m=n;
		n=r;
	}
	return m;
}
int lcm(int m, int n) {
    return m * n / gcd(m, n);
}
int main()
{
	
	int as2[5];
	vector <string> am1;
	vector <int> am2;  
	int n;
	cin>>n;
	cin.ignore();
	while(n>0)
	{
		int	j=0;
		am1.clear();
		string num;
		getline(cin,num);
		stringstream ss(num);
		string token;
		while(getline(ss,token,','))
		{
			am1.push_back(token);
		}
		for(int i=0;i<am1.size();i++)
		{
			stringstream sss(am1[i]);
			string token1;
			while(getline(sss,token1,'/'))
			{
				int aa=atoi(token1.c_str());
				as2[j]=aa;
				j++;
				//am2.push_back(aa);
			}
		}
		
		/*for(int i=0;i<4;i++)
		{
			cout<<as2[i];
		}*/
		int am,bm; 
		int ab,bb;
		ab=as2[0];
		am=as2[1];
		bb=as2[2];
		bm=as2[3];
		/*am=num[2]-'0';
		bm=num[6]-'0';
		ab=atoi(num.c_str()); 
		bb=atoi(num.c_str());*/
	/*	cout<<ab<<" "<<am;
		cout<<bb<<" "<<bm<<endl;*/
		
		
		
		
		//約分 
		int ansb=bm*ab+am*bb;
		int ansm=am*bm;
		int div=gcd(ansb,ansm);  //最小公倍數 
		while(div!=1)
		{
			div=gcd(ansb,ansm);
			ansb/=div;
			ansm/=div;
		}
		cout<<ansb<<"/"<<ansm<<endl;
		n--;
	}
}
