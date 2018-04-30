#include <iostream>  
#include <vector>  
#include <string.h>  
#include <sstream>  
using namespace std;  
  
int main()  
{   
	int num;
	cin>>num;
	for(int i=0;i<=num;i++)
	{
		vector<string>arr;  
    	string input;  
    	getline(cin,input);  
    istringstream delim(input);  
    string token;  
    int c=0;  
    while(getline(delim,token,' '))  
    {  
        int k=0;  
        int len=token.size();  
        for(int k=0;k<len;k++)  
        {  
            if(token[k]>64 && token[k]<91)  
                token[k]+=32;  
        }  
        for(int i=0;i<c;i++)  
        {  
            if(token==arr[i])  
                k=1;  
        }  
        if(k!=1)  
        {  
            arr.push_back(token);  
            c++;  
        }  
    }  
    for(int j=0;j<c;j++)  
    {  
        if(j!=c-1)  
            cout<<arr[j]<<" ";  
        else  
            cout<<arr[j]<<endl;  
    }
	}
    //return 0;  
}
