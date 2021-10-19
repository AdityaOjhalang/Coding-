#include <iostream>
#include <climits>//INT MIN : -2^31  AND INT MAX : 2^31 -1 
using namespace std;
int main()
{
	int n, sum = 0, no, largest = INT16_MIN, mini = INT16_MAX;
	cin >> n;
	cout << endl;
	for (int i = 1; i <= n; i++)
	{
		cin >> no;
		if (no > largest)
		{
			largest = no;
		}
		if (no < mini)
		{
			mini = no;
		}
		sum += no;
	}
	int mean = sum / n;
	cout << "LARGEST = " << largest << endl;
	cout << "SMALLEST = " << mini << endl;
	cout << "MEAN =" << mean << endl;
	return 0;
}