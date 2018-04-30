#include<iostream>
#include<algorithm>
#include<vector>
#include<sstream>
using namespace std;
bool cmp(string a,string b)
{
	if(a[0]>b[0])
		return true;
	//如果兩個英文字母相同 
	else if(a[0]==b[0])
	{
		//先比較長度大小 比較長的一定比較大  
		if(a.length()>b.length())
			return true;
		//如果長度一樣都是2個 比較第二個數字 
		else if(a.length()==b.length() && a.length()==2)
		{
			if(a[1]>b[1])
				return true;
			else
				return false;
		}
		//如果長度一樣都是3個 比較第三個數字 
		else if(a.length()==b.length() && a.length()==3)
		{
			if(a[2]>b[2])
				return true;
			else
				return false;
		}
		else return false;
			
		
	}
	else
		return false;
}
int main()
{
	int num,i,j;
	//此處輸入為測資數 
	cin>>num;
	cin.ignore();
	for(i=0;i<num;i++)
	{
		//宣告陣列vector 
		vector<string>array;
		string s;
		//取得我們的撲克牌 此為讀取一整行 
		getline(cin,s);
		//將其丟到istringstream  
		istringstream delim(s);
		string token;
		//將我們的字串做切割並丟到array裡並運用堆疊 
		while(getline(delim,token,' '))
		{
			array.push_back(token);
		}
		//將其作排序，更改其cmp規則 
		sort(array.begin(),array.end(),cmp);
		
		//此迴圈為輸出，到最後一個時換行 ，否則就空一格 
		for(j=0;j<array.size();j++)
		{
			if(j!=array.size()-1)
				cout<<array[j]<<" ";
			else
				cout<<array[j]<<endl;
		}
	}
	
	
	
	return 0;
}
