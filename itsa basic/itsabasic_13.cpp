#include<iostream>
#include<algorithm>
#include<vector>
#include<sstream>
using namespace std;
bool cmp(string a,string b)
{
	if(a[0]>b[0])
		return true;
	//�p�G��ӭ^��r���ۦP 
	else if(a[0]==b[0])
	{
		//��������פj�p ��������@�w����j  
		if(a.length()>b.length())
			return true;
		//�p�G���פ@�˳��O2�� ����ĤG�ӼƦr 
		else if(a.length()==b.length() && a.length()==2)
		{
			if(a[1]>b[1])
				return true;
			else
				return false;
		}
		//�p�G���פ@�˳��O3�� ����ĤT�ӼƦr 
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
	//���B��J������� 
	cin>>num;
	cin.ignore();
	for(i=0;i<num;i++)
	{
		//�ŧi�}�Cvector 
		vector<string>array;
		string s;
		//���o�ڭ̪����J�P ����Ū���@��� 
		getline(cin,s);
		//�N����istringstream  
		istringstream delim(s);
		string token;
		//�N�ڭ̪��r�갵���Ψå��array�̨ùB�ΰ��| 
		while(getline(delim,token,' '))
		{
			array.push_back(token);
		}
		//�N��@�ƧǡA����cmp�W�h 
		sort(array.begin(),array.end(),cmp);
		
		//���j�鬰��X�A��̫�@�Ӯɴ��� �A�_�h�N�Ť@�� 
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
