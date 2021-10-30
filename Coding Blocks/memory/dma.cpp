#include <iostream>
#include <cmath>
#include <climits>
using namespace std;
//using a function to make a dynamic array
int * fn(int n){
	int *a = new int(n);
	return a;// as pointer a is a local variable it will be deleted after returning the value when fuction is passed
}
int main()
{	
	
	int n;
	cin >> n;
	int *p = fn(n); //now as the func is called the local variable a in the fn is deleted and now p points to the address at which 'a' was pointing 
	// dynamically creating an array of size n
	int *a = new int[n]; // new variable returns the address array
	for (int i = 0; i < n; i++)
	{
		//a[i] = i + 1;
	}
	for (int i = 0; i < n; i++)
	{
		//cout << a[i] << " ";
	}
	cout << endl;

	delete[] a; // deleting cause dynamic memory needs to be deleted
	a = NULL;   // array pointing to null
	//segmentaion fault should be there as array is pointing to null
	for (int i = 0; i < n; i++)
	{
		//cout << a[i] << " ";
	}

	// making a primtive datatype
	int *x = new int;
	*x = 10;
	//cout << "X: " << *x << endl;
}