#include <iostream>
#include <cmath>
#include <climits>
using namespace std;
int main()
{
	int a[4][4] = {{1, 2, 3, 4}, {5, 6, 7, 8}, {9, 10, 11, 12}, {13, 14, 15, 16}};
	int r = 4;
	int c = 4;
	int sr, er, sc, ec;
	sr = 0, sc = 0; //starting row and coloumn
	ec = c - 1;	//ending coloumn
	er = r - 1;	//ending row
	//lets start the algorithm now
	while (sr < er and sc < ec)
	{
		//print sr (from sc -> ec)
		for (int i = sc; i <= ec; i++)
		{
			cout << a[sr][i] << " ";
		}
		sr++;
		cout << endl;

		//print ec (from sr -> er)
		if (sc < ec)
		{
			for (int i = sr; i <= er; i++)
			{
				cout << a[i][ec] << " ";
			}
			ec--;
			cout << endl;
		}

		//print er (from ec -> sc)
		if (sr < er)
		{
			for (int i = ec; i >= sc; i--)
			{
				cout << a[er][i] << " ";
			}
			er--;
			cout << endl;
		}

		//print sc (from er ->  sr)
		for (int i = er; i >= sr; i--)
		{
			cout << a[i][sc] << " ";
		}
		sc++;
		cout << endl;
	}
}