#include<iostream>  
#include<vector>  
#include<sstream>  
#include<algorithm>  
using namespace std;  
  
int main()  
{  
    vector <int> ans;  
    vector <int> av;  
    vector <int> bv;  
    string a;  
    string b;  
    getline(cin,a);  
    getline(cin,b);  
    stringstream aa(a);  
    stringstream bb(b);  
    string token;  
    while(getline(aa,token,','))  
    {  
        av.push_back(atoi(token.c_str()));  
      
    }  
    while(getline(bb,token,','))  
    {  
        bv.push_back(atoi(token.c_str()));  
          
    }  
    bool seta[1000];  
    bool setb[1000];  
    bool setans[1000];  
    for(int i=0;i<1000;i++)  
    {  
        seta[i]=0;  
        setb[i]=0;  
        setans[i]=0;  
    }   
    for(int i=0;i<av.size();i++)  
    {  
        seta[av[i]]=true;  
          
    }  
    for(int i=0;i<bv.size();i++)  
    {  
        setb[bv[i]]=true;  
    }  
      
    for(int i=0;i<1000;i++)  
    {  
        setans[i]= seta[i] && setb[i];  
    }  
    for(int i=0;i<1000;i++)  
    {  
        if(setans[i]==1)  
        {  
            ans.push_back(i);  
        }   
    }  
   
    if(ans.size()==0)
	{
		cout<<"null"<<endl;
	}
	else
	{
		for(int i=0;i<ans.size()-1;i++)  
    	{  
        	cout<<ans[i]<<" ";  
    	}  
    	cout<<ans[ans.size()-1]<<endl; 	
	}
     
  
  
      
  
}  
