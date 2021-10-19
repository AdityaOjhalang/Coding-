#include <iostream>
using namespace std;
struct faculty
{	int prof_id;
	char name[100];
	char dept[100];};
int csecount(struct faculty *a)
{	int count = 0;
	for (int i = 0; i < 3; i++)
	{
		if (strcmp(a[i].dept,"CSE")==0)
			count++;
	}
	return count;
}
int main()
{	int n = 3 ;
	faculty a[100];
	for (int i = 0; i < n; i++)
	{
		cin >> a[i].prof_id;
		cin >> a[i].name;
		cin >> a[i].dept;
	}
	cout<<endl;
	cout<<csecount(a)<<endl;
}