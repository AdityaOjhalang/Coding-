#include <iostream>
#include <cmath>
#include <climits>
using namespace std;
//1st way
int checkindexof7(int *a, int n, int i = 0)
{
	//base case
	if (i == n)
		return -1;
	//recursive case
	if (a[i] == 7)
		return i;
	int ans = checkindexof7(a, n, i + 1);
	return ans;
}
//second way
int checkindxsecond(int *a,int n ){
	//base case
	if(n==0)
		return -1;
	//recursive case 
	if(a[0]==7)
		return 0;
	int ans = checkindxsecond(a+1,n-1);
	if(ans == -1)
	 	return -1;
	else	
		return ans+1;
}
int main()
{

	int a[] = {5, 4, 7, 2, 1};
	int n = sizeof(a) / sizeof(int);
	cout << checkindexof7(a, n) << endl;
	cout << checkindxsecond(a, n) << endl;
}
