#include<iostream>

using namespace std;

int main()
{
    int n=3;
    //cin>>n;
    int sum=0;
    int a[n]={1,3,-3};
    for(int i=0;i<n;i++)
    {
        for(int j=i;j<n;j++)
        {
            cout<<i<<" "<<j<<" ";
            cout<<endl;
           cout<<a[i]+a[j]+(j-i)<<" ";
           cout<<endl;
           if(a[i]+a[j]+(j-i)>sum)
            {
                sum=a[i]+a[j]+(j-i);
            }
        }
        cout<<endl;

    }
    cout<<sum;



    return 0;
}
