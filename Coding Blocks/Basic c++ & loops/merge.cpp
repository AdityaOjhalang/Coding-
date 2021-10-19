#include <iostream>
#include <cmath>
#include <climits>
using namespace std;
void merge(int *a, int *b, int *c, int n, int m)
{
	int k = 0;
	int i = 0;
	int j = 0;
	while (i < n && j < m)
	{
		if (b[i] < c[j])
		{
			a[k] = b[i];
			i++;
			k++;
		}
		else
		{
			a[k] = c[j];
			j++;
			k++;
		}
	}
	while (i < n)
	{
		a[k++] = b[i++];
	}
	while (j < m)
	{
		a[k++] = b[j++];
	}
}
void print(int a[], int n)
{
	for (int i = 0; i < n; i++)
	{
		cout << a[i] << " ";
	}
	cout << endl;
}
int main()
{
	int a[100];
	int b[] = {2, 4, 8, 10};
	int n = sizeof(b) / sizeof(int);
	int c[] = {6, 7, 9};
	int m = sizeof(c) / sizeof(int);
	merge(a, b, c, n, m);
	print(a, n + m);
}