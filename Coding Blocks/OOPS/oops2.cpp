#include <iostream>
#include <string>
#include <climits>
using namespace std;
bool func (int a[], int n)
{
for (int i=1;i<n;i++)
if (a[i]>a[i-1])
return false;
return true;
}
int main()
{
int a1[] = {1,2,4 ,5, 6, 3, 8};
cout<< func (a1, 7);
}