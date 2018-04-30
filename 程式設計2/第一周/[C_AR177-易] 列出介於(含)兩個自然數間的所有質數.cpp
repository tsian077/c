#include<iostream>
#include<vector>
bool prime[20000000];
void eratosthenes()
{
    for (int i=0; i<20000000; i++)  // ��l��
        prime[i] = true;
 
    prime[0] = false;   // 0 �M 1 ���O���
    prime[1] = false;
 
    // ��U�@�ӥ��Q�R�����Ʀr
    for (int i=2; i<20000000; i++)
        if (prime[i])
            // �R�����i�����ơA�q�⭿�}�l�C�O�d�쥻��ơC
            for (int j=i+i; j<20000000; j+=i)
                prime[j] = false;
}

using namespace std;
int serprime(int in,int to)
{
	vector<int> ans;
	bool anye=false;
	for(int i=in;i<=to;i++)
	{
		if(prime[i])
		{
			ans.push_back(i);
			anye=true;
		}
			
	}
	if(anye)
	{
		for(int i=0;i<ans.size()-1;i++)
		{
			cout<<ans[i]<<",";	
		}
		cout<<ans[ans.size()-1]<<endl;	
	}
	else
	{
		cout<<"none"<<endl;
	}
	
	ans.clear();
	
}
int main()
{
	eratosthenes();
	int n;
	cin>>n;
	for(int i=0;i<n;i++)
	{
		int a=0,b=0;
		cin>>a>>b;
		serprime(a,b);
	}
	
	
	
	return 0;
}
 
