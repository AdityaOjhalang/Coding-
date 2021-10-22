#include <iostream>
#include <cmath>
#include <climits>
using namespace std;
int main()
{
	int arr[] = {1, 2, 3, 4, 5};
	int n = sizeof(arr) / 4;
	int ans;
	int ind[100];
	int k;
	cin >> k;
	
	for (int i = 0; i < n; i++)
	{       int sum = 0;
		for (int j = i; j < n; j++)
		{
			sum += arr[j];
			if (sum == k)
			{       cout<<"SubArray {"<<i<<";"<<j<<"}"<<endl;
				ans++;
			}
		}
	}
	cout << ans;
}