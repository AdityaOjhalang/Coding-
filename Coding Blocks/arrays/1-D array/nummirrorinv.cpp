#include <iostream>
#include <cmath>
#include <climits>
using namespace std;
void print(int a[], int n)
{
	for (int i = 0; i < n; i++)
	{
		cout << a[i] << " ";
	}
}
int length(int n)
{
	int k = n;
	int i = 0;
	while (k > 0)
	{
		k = k / 10;
		i++;
	}
	return i;
}
int main()
{
	int n;
	cin >> n;
	int arr[n];
	for (int i = 0; i < n; i++)
	{
		cin >> arr[i];
	}

	for (int i = 0; i < n; i++)
	{
		int k = length(arr[i]);
		int a[k];
		int f = 0;
		while (arr[i] > 0)
		{
			a[f] = arr[i] % 10;
			arr[i] = arr[i] / 10;
			f++;
		}
		int m[k];
		for (int j = 0; j < k; j++)
		{
			int p = a[j];
			m[p - 1] = j + 1;
		}
		bool istrue = true;
		for (int j = 0; j < k; j++)
		{
			if ((a[j] ^ m[j]) != 0)
			{
				istrue = false;
				break;
			}
		}
		if (istrue == true)
		{
			cout << "true" << endl;
		}
		else
		{
			cout << "false" << endl;
		}
	}
}
// utsav ka code edit
// #include <iostream>
// #include <cmath>
// #include <climits>
// using namespace std;
// void print(int a[], int n)
// {
//         for (int i = 0; i < n; i++)
//         {
//                 cout << a[i] << " ";
//         }
// }
// int length(int n)
// {
//         int k = n;
//         int i = 0;
//         while (k > 0)
//         {
//                 k = k / 10;
//                 i++;
//         }
//         return i;
// }
// int main()
// {
//         int n;
//         cin >> n;
//         int arr[n];
//         for (int i = 0; i < n; i++)
//         {
//                 cin >> arr[i];
//         }

//         for (int i = 0; i < n; i++)
//         {
//                 int k = length(arr[i]);
//                 int a[k];
//                 int f = 0;
//                 while (arr[i] > 0)
//                 {
//                         a[f]   = arr[i] % 10;
//                         arr[i] = arr[i] / 10;
//                         f++;
//                 }
//                 bool flag = true;
//                 for (int j = 0; j < k; j++)
//                 {
//                         int x = a[j];
//                         if(a[x-1]==j+1){
//                              flag = true;
//                         }
//                         else {
//                                 flag = false;
//                                 break;
//                         }
//                 }
//                 if(flag == true){
//                         cout<<"true";

//                 }
//                 else{
//                         cout<<"false";
//                 }
//         }
// }