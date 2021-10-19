#include <iostream>
#include <cmath>
#include <climits>
using namespace std;
int main()
{
	int n;
	cin >>n;
	int arr[n];
	for(int i=0;i<n;i++){
		cin>>arr[i];

	}
	int largest = INT16_MIN;
	for (int i = 0; i < n; i++)
	{
		if (arr[i] > largest)
		{
			largest = arr[i];
		}
	}
	cout << largest << endl;
	return 0;
}