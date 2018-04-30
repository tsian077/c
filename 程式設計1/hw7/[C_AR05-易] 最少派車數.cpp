#include<iostream>
#include<string.h>
using namespace std;

//用陣列儲存車子哪個時間有再跑，在找陣列中最大的值代表需要幾台車，因為重疊就表示需要幾個司機
int main()
{
int n;
int car[25];
memset(car,0,sizeof(car));
cin>>n;
while(n!=0)
{
    int s,d;
    cin>>s>>d;
    for(int i=s;i<d;i++)
    {
        car[i]++;
    }
    n--;
}
int ma=0;
for(int i=0;i<25;i++)
{
    if(car[i]>ma)
    {
        ma=car[i];
    }

}

cout<<ma<<endl;

return 0;
}

