#include<iostream>
#include<string>
#include<stack>
using namespace std;

int main()
{
	int n;
	cin>>n;
	cin.ignore();
	for(int i=0;i<n;i++)
	{
		 string str;
    stack<char> small;
    getline(cin,str);
    for(int i=0;i<str.size();i++)
    {
         switch(str[i])
         {
         case '(':  small.push(str[i]);    //�J��(���i�h 
              break;
         case ')':  if(!small.empty())  
                        {
                            small.pop();     //�J��)�u�X�� 
                            break;
                        }
                       if(small.empty())     //�`���������A�զ��ɬ��ūh���t 
                           break;
         }
    }
    if(small.empty())   
        cout<<"Yes"<<endl;
    else
        cout<<"No"<<endl;
	}
   

    return 0;
}
