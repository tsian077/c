#include<iostream>
#include<set>
#include<vector>
using namespace std;

int main()
{
	set<int> m;
	int n;
	cin>>n;
	for(int i=0;i<n;i++)
	{
		int temp;
		cin>>temp;
		m.insert(temp);
	}
	/*for(set<int>::iterator it=m.begin();it!=m.end()-1;it++)
	{
		cout<<*it<<" ";

	}*/
	
	vector<int> buf(m.begin(),m.end());
	for(int i=0;i<buf.size();i++){
		if(i!=buf.size()-1)
			cout<<buf[i]<<" ";
		else
			cout<<buf[i]<<endl;
	}
	
}
