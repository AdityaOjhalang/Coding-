#include <iostream>
#include <cmath>
#include <climits>
#include <string>
using namespace std;
void towerofhanoi(int n, char source, char helper, char destination)
{
	//base case
	if (n == 0)
		return;

	//recursive case
	// 1. take n-1 disk from source to helper
 	towerofhanoi(n - 1, source, destination, helper);
	// 2. take nth disk from desination to the source
	cout << "Taking " << n << " disk from " << source << " to " << destination << endl;
	// 3 helper se n-1 plate ko destionation pe rakh do
 	towerofhanoi(n - 1, helper, source, destination);
}
int main()
{
	int n;

	cin >> n;
	towerofhanoi(n, 'a', 'b', 'c');
	
}
