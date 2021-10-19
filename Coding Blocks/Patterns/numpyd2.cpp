#include <iostream>
using namespace std;
int main()
{
	int n;
	cin >> n;
	for (int i = 1; i <= n; i++)
	{
		for (int j = 1; j <= n - i; j++)
		{
			cout << "	";
		} 
		int k = i; //to start with the row number on each different line
		for (int j = 1; j <= i; j++)
		{
			cout << k <<"	";
			k++;
		}
		int m = 2 * i - 2;  //assigning value to m 
		for (int j = 1; j < i; j++) //j<i important thing, I was stuck on it 
		{
			cout << m << " ";
			m--;
		}
		cout << endl;
	}
}




