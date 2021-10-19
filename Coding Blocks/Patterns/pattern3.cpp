#include <iostream>
using namespace std;
int main()
{
	int n;
	cin >> n;
	int x;
     	for (int i = 1; i <= n; i++)
	{
		if (i % 2 == 0)
		{
			x = 0;
		}
		else
		{
			x = 1;
		}
		for (int j = 1; j <= i; j++)
		{
			cout << x << " ";
			x = 1 - x;//one of the best things to use if you want to swap btw 2 numbers
		}
		cout << endl;
	}
}