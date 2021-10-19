#include <iostream>
using namespace std;
int main()
{
	int n, newno;
	cin >> n;
	newno = 0;
	while (n > 0)
	{
		int r = n % 10;
		newno = newno * 10 + r;
		n = n / 10;
	}
	cout << endl;
	cout << newno;
}