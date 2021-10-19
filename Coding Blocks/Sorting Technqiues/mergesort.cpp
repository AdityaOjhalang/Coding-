#include <iostream>
#include <cmath>
#include <climits>
using namespace std;
void print(int a[], int n)
{
	for (int i = 0; i < n; i++)
	{
		cout << a[i] << " ";
	}
	cout << endl;
}
void merge(int *a, int *b, int *c, int s, int e)
{
	int mid = (s + e) / 2;
	int k = s;
	int i = s;
	int j = mid + 1;
	while (i <= mid && j <= e)
	{
		if (b[i] < c[j])
		{
			a[k++] = b[i++];
		}
		else
		{
			a[k++] = c[j++];
		}
	}
	while (i <= mid)
	{
		a[k++] = b[i++];
	}
	while (j <= e)
	{
		a[k++] = b[j++];
	}
}
void mergesort(int *a, int s, int e)
{
	//BASE CASE
	if (s >= e)
	{
		return;
	}
	//RECURSIVE CASE

	// 1. Divide the array into smaller arrays
	int mid = (s + e) / 2;
	int b[100];
	int c[100];
	for (int i = s; i <= mid; i++)
	{
		b[i] = a[i];
	}
	for (int i = mid + 1; i <= e; i++)
	{
		c[i] = a[i];
	}

	// 2. Sort the array
	mergesort(b, s, mid);
	mergesort(c, mid + 1, e);

	// 3. Merge the sorted smaller arrays
	merge(a, b, c, s, e);
}
int main()
{

	int a[] = {8, 2, 7, 4, 1, 3};
	int n = sizeof(a) / sizeof(int);
	print(a, n);
	cout << endl;
	mergesort(a, 0, n - 1);
	print(a, n);
	cout << endl;
}