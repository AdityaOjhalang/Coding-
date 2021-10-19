#include <iostream>
#include <cmath>
using namespace std;
int main()
{
	int n;
	cin >> n;
	int arr[n];
	int arr1[] = {10, 20, 30, 40,6,7,7,8,8,8,8,8,9,9,9,9,9,9,9,9};
	int arr2[5] = {3, 6, 7, 8, 8};
	cout<<sizeof(arr1);
	for (int i = 1; i <= n; i++)
	{
		cin >> arr[i];
	}
	for (int i = 1; i <= n; i++)
	{
		cout << arr[i] << endl;
		cout << arr1[i] << endl;
		cout << arr2[i] <<endl;
	}
}