#include<iostream>
using namespace std;
int main()
{
	int n;
	cin >> n;
	int arr[1000] = { 0 };

	for (int i = 0; i < n; i++)
	{
		cin >> arr[i];
	}
	int sum = 0;
  //因為邊界的地方不會積水，所以由 1 掃描到 n-2 即可。
	for (int pos = 1; pos < n - 1; pos++)
	{
		//檢查左邊最大值
		int lmax = 0;
		for (int j = 0; j <= pos; j++)
		{
			if (arr[j] > lmax)
			{
				lmax = arr[j];
			}
		}
		//檢查右邊最大值
		int rmax = 0;
		for (int j = pos; j < n; j++)
		{
			if (arr[j] > rmax)
			{
				rmax = arr[j];
			}
		}
		int minmax = 0;
		if (rmax > lmax)
			minmax = lmax;
		else
			minmax = rmax;
	
		sum += minmax - arr[pos];
	}
	cout << sum << endl;
	return 0;
}
