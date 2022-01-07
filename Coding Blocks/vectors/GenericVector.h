#include <iostream>
#include <cmath>
#include <climits>
using namespace std;

class Vector
{
public:
	int *arr;
	int csize;
	int msize;
	// constructor to help user intitalize at start
	Vector(int s = 2)
	{
		csize = 0; // 0 elemenmts
		msize = 2;
		arr = new int[msize];
	}
	void push_back(int d)
	{
		if (csize == msize)
		{
			int *oldarr = arr;
			int oldms = msize;
			arr = new int[msize * 2];
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
	void pop_back(int d)
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
	int operator[](int index)
	{
		return arr[index];
	}
};