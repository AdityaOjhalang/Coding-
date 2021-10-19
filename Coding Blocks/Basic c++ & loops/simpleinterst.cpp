#include <iostream>
using namespace std;
int main()
{
	int p, r, t;
	cout << "Enter the value of the p ,r , t = " << endl;
	cin >> p >> r >> t;
	float si = (float)(p * r * t) / 100;
	cout << "Simple Interest is = " << si << endl;
}