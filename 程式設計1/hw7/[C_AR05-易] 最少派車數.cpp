#include<iostream>
#include<string.h>
using namespace std;

//�ΰ}�C�x�s���l���Ӯɶ����A�]�A�b��}�C���̤j���ȥN��ݭn�X�x���A�]�����|�N��ܻݭn�X�ӥq��
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

