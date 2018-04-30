#include<iostream>
#include<vector>
using namespace std;

int main()
{   
    int n;
	int i=0;
	vector<int> v;
	v.push_back(1);
	
    while((int)v.size()<n)
	{
		bool x=false;
		for(int j=0;j<v.size();j++)
		{
			if(j=(i-1)/2 == v[j]||j=(i-1)/3 == v[j]){
				x=true;
				break;
			}
			if(x){
				v.push_back(i);
			}
		}
		i++;
	}
	
	
	return 0;
}
