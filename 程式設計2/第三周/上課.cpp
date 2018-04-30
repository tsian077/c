#include<iostream>
#include<set> 
using namespace std;

int main()
{
	//宣告一個set ，裡面每隔元素都是整數 
	set<int> c;
	
	//宣告一個set， 裡面都是福點數 
	set<double> x; 
	
	
	//新增元素 
	c.insert(5);
	c.insert(10);
	c.insert(5);
	
	//刪除元素 
	c.erase(5);
	
	//清除所有 
	c.clear();
	
	//計算出現幾次 
	c.count(5);
	
	//找出元素 
	c.find(5);
	//C++ 11之後才有的
	/*set<int> M={1,2,2,5}; 
	for(int v : M)
	{
		cout<<v<<endl;
	}*/
	
	//it可視為響導 他的名稱為跌代器 最初由begin 只要還沒指到end() 就部會停止 
	//for(set<int>::iterator it = buf.begin(); it!=buf.end(); it++)
	for(set<int>::iterator it = c.begin(); it!=c.end(); it++)
	{
		cout<<*it<<endl;
	}
	
	return 0;
}
