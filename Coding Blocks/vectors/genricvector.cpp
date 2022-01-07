#include <iostream>
#include <cmath>
#include <climits>
#include "GenericVector.h" // how to call a header file
using namespace std;
int main()
{
	Vector v;
	v.push_back(1);
	v.push_back(2);
	v.push_back(3);
	v.push_back(4);
	v.push_back(5);

	for (int i = 0; i < v.size(); i++)
	{
		cout << v[i] << " ";
	}
	cout << endl;
	cout << "Size :" << v.size() << endl;
	cout << "Capacity :" << v.capacity() << endl;

	cout<<"used pop function"<<endl;
	v.pop_back(2);

	cout << "Size :" << v.size() << endl;
	cout << "Capacity :" << v.capacity() << endl;

	for (int i = 0; i < v.size(); i++)
	{
		cout << v[i] << " ";
	}
	cout << endl;
}