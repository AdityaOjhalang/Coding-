#include <iostream>
using namespace std;
int main()
{
	int intialval, finalval, stepval;
	cin >> intialval >> finalval >> stepval;
	int c;
	for (int i = intialval; i <= finalval; i += stepval)
	{
		//precedence of datatypes warna 0 aayega c ka value int/int 0 aayega
		c = (5 / 9.0) * (i - 32);
		cout << i << "   " << c << endl;
	}
}