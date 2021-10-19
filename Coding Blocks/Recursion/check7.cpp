#include <iostream>
#include <cmath>
#include <climits>
using namespace std;
bool check7(int *a, int n)
{
	//base
	if (n == 0)
		return false;
	//recursice
	if (a[0] == 7)
		return true;
	bool ans = check7(a + 1, n - 1);
	return ans;
}
int main()
{

	int a[] = {5, 4, 3, 2, 1, 7};
	int n = sizeof(a) / sizeof(int);
	bool b = check7(a, n);
	if (b)
	{
		cout << " HAAN HAI 7 " << endl;
	}
	else
		cout << " NAHI HAI 7 " << endl;
}
