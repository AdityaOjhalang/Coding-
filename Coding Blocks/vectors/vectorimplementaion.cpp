#include <iostream>
#include <cmath>
#include <climits>
using namespace std;
template<typename T> // type casting 
class Vector
{
public:
	T *arr;
	int csize;
	int msize;
	// constructor to help user intitalize at start
	Vector(int s = 2)
	{
		csize = 0; // 0 elemenmts
		msize = 2;
		arr = new T[msize];
	}
	void push_back(T d)
	{
		if (csize == msize)
		{
			T *oldarr = arr;
			int oldms = msize;
			arr = new T[msize * 2];
			msize = msize * 2;
			for (int i = 0; i < oldms; i++)
			{
				arr[i] = oldarr[i];
			}
			delete[] oldarr;
		}
		arr[csize] = d;
		csize++;
	}
	void pop_back(T d)
	{
		if (csize > 0)
			csize--;
	}

	int size()
	{
		return csize;
	}
	int capacity()
	{
		return msize;
	}
	// operator overloading to get the value of v[1] , v[0]
	T operator[](int index)
	{
		return arr[index];
	}
};
int main()
{
	Vector<int> v;
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