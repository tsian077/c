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

            if(ans[i]=='0')   //�p�G���Ĥ@��0 
            {
                for(int j=i;j<i+k;j++)  //���O���O��K��0 
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
                        //cout<<"���ŦX��";
                        delet=false;
                       
                    }
                    else
                    {
                        //cout<<"�ŦX��";
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
