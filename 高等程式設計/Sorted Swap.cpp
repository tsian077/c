#include<iostream>
#include<algorithm>
#include<string.h>
using namespace std;

int main()
{
    long int n;
    cin>>n;
    long int inpu[n+1];
    long int temp[n+1];
    long int sor[n+1];
    memset(inpu,0,n+1);
    memset(temp,0,n+1);
    memset(sor,0,n+1);
    bool ans=true;
    for(int i=0;i<n;i++)
    {
        cin>>inpu[i];
        temp[i]=inpu[i];
        sor[i]=inpu[i];
    }
    sort(sor,sor+n);
    for(int i=0;i<n;i++)
    {

        for(int k=0;k<n;k++)
        {
            ans=true;
            temp[i]=inpu[k];
            temp[k]=inpu[i];
            for(int j=0;j<n;j++)
            {
                //cout<<temp[j]<<" ";
                if(temp[j]!=sor[j])
            {
                //¤£¦P
                ans=false;
                break;
            }
            }
            //cout<<endl;
            if(ans)
            {
                break;
            }
            temp[i]=inpu[i];
            temp[k]=inpu[k];
        }
        if(ans)
        {
            break;
        }

    }
    if(ans)
    {
        cout<<"true"<<endl;
    }
    else
    {
        cout<<"false"<<endl;
    }



   /* for(int i=0;i<n;i++)
    {
        cout<<inpu[i]<<" ";
    }
    cout<<endl;
    for(int i=0;i<n;i++)
    {
        cout<<sor[i];
    }
*/

}
