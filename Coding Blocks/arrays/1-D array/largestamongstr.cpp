#include <iostream>
#include <cmath>
#include <climits>
using namespace std;
int length(char *a)
{
	int i;
	for (i = 0; a[i] != '\0'; i++){;}
	return i;
}
void copy(char *a, char *b)
{
	int i = 0, j = 0;
	int lenb = length(b);
	while (j <= lenb)
	{
		a[i++] = b[j++];
	}
}
int main()
{
	int n;
	cin >> n;
	cin.ignore();
	char largest[100];
	char a[100];
	int largestlen = INT16_MIN;
	for (int i = 0; i < n; i++)
	{
		cin.getline(a, 100);
		int len = length(a);
		if (largestlen < len)
		{
			copy(largest, a);
			largestlen = len;
		}
	}
	cout << largest << endl
	     << largestlen << endl;
}