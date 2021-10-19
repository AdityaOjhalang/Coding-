#include <iostream>
#include <cmath>
#include <climits>
using namespace std;
int main()
{
	//put a null space at the end to stop from recklessly printing garbage till null.
	char b[] = {'a', 'b', 'c', 'd', '\0'};
	char a[] = {'a', 'b', 'c', 'd', '\0'};
	//Have to give size of n+1 otherwise error cause of no null space.
	char t[] = "Kartik"; //null is by default present at the end.
	cout << a << endl
	     << b << endl
	     << t << endl;
}