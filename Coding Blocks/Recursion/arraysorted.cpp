#include <iostream>
#include <cmath>
#include <climits>
using namespace std;
bool issorted(int *a, int n)
{
	//base case
	if (n == 0 || n == 1) // kya array me 1 element hai ya ek bhi element nahi hai 
		return true;
	//recurrence relation
	bool chotiarr = issorted(a + 1, n - 1);//kya choti array sorted hai ?
	if (chotiarr==true && a[0]<a[1])//kya choti arr sorted hai aur array ka 1st element chota hai 2nd element se 
		return true;//if yes puri array sorted hai
	else
		return false;//if no then array sorted nahi hai
}
int main()
{
	int a[] = {1, 2, 3, 4, 8, 7};
	int n = sizeof(a) / sizeof(int);
	bool ans = issorted(a, n);
	if (ans)
		cout << "sorted" << endl;
	else
		cout << "Not sorted" << endl;
}