#include<iostream>

using namespace std;

int main()
{
int k=3;
string ans="a0000abababaa000";
//cin>>k;
//cin>>ans;
//cout<<ans.length()<<endl;
int delet=false;
        for(int i=0;i<ans.length();i++)  
        {

            if(ans[i]=='0')   //如果有第一個0 
            {
                for(int j=i;j<i+k;j++)  //算算是不是有K個0 
                {
                    if(ans[j]!='0')
                    {
                        delet=false;
                        break;
                    }
                    else
                    {
                        delet=true;
                    }
                }

                if(delet)
                {
                //i=i+k;
                	if(ans[i+k]=='0' && k!=1)
                    {
                    	for(int a=i;a<=k;a++)
						{
							cout<<ans[a];
						}
						i=i+k;
                        //cout<<"不符合喔";
                        delet=false;
                       
                    }
                    else
                    {
                        //cout<<"符合喔";
                       i=i+k;
                       delet=false;
                    }
                }
            }
            else
            {
                cout<<ans[i];
            }
        }
        cout<<endl;
return 0;
}
