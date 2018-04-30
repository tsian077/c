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
         case '(':  small.push(str[i]);    //遇到(壓進去 
              break;
         case ')':  if(!small.empty())  
                        {
                            small.pop();     //遇到)彈出來 
                            break;
                        }
                       if(small.empty())     //循環間結束，諾此時為空則失配 
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
