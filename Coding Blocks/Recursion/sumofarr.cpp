#include <iostream>
#include <cmath>
#include <climits>
using namespace std;
int sumarr(int *a, int n)
{
	//base case
	if (n <= 0) //if no element return sum 0;
		return 0;
	//recurrence relation
	int sum = sumarr(a + 1, n - 1) + a[0]; //choti array ka sum + array ka 1st elememt
	// int sum = sumarr(a , n - 1) + a[n - 1]; second way to solve
	return sum;
}
int sumarr2(int *a, int n)
{
	//base case
	if (n == 0) //if no element return sum 0;
		return 0;
	//recurrence relation
	// int sum = sumarr(a + 1, n - 1) + a[0]; //choti array ka sum + array ka 1st elememt
	int sum = sumarr2(a, n - 1) + a[n - 1];
	return sum;
}
int sumarr3(int *a, int n, int i = 0)
{
	//base case
	if (i == n)
		return 0;
	//recurrence case
	int sum = a[i] + sumarr3(a, n, i + 1);
	return sum;
}
int main()
{

	int a[] = {5, 4, 3, 2, 1, 15};
	int n = sizeof(a) / sizeof(int);
	cout << sumarr(a, n) << endl;
	cout << sumarr2(a, n) << endl;
	cout << sumarr3(a, n) << endl;
}