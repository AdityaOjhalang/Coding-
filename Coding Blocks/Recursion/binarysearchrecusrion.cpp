#include <iostream>
#include <cmath>
#include <climits>
using namespace std;
int binary(int *a, int s, int e, int key)
{
	//base case
	if (s > e)
	{
		return -1;
	}
	//recurrence case
	int mid = (s + e) / 2;
	if (a[mid] == key)
	{
		return mid;
	}
	else if (a[mid] < key)
	{
		return binary(a, mid + 1, e, key);
	}
	else
	{
		return binary(a, s, mid - 1, key);
	}
}
int main()
{

	int a[] = {5, 4, 3, 2, 1};
	int n = sizeof(a) / sizeof(int);
	int ans = binary(a, 0, n - 1, 200);
	if (ans == -1)
	{
		cout << "NOT FOUND"
		     << " ";
	}

	else
	{
		cout << "FOUND"
		     << " ";
	}
}
