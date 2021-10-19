#include <iostream>
using namespace std;
int main()
{
	int n;
	cout << "Enter the numer to be checked :- ";
	cin >> n;
	int a, b, c;
	a = 0;
	b = 1;
	c = 0;
	while (c <= n)
	{
		c = a + b;
		if (c == n)
		{
			cout << "YES fibonacci \n";
			break;
		}
		a = b;
		b = c;
	}
	if (c > n)
	{
		cout << "NOT Fibonacci \n";
	}
	
}