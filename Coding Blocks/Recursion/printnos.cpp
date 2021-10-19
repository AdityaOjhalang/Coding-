#include <iostream>
#include <cmath>
#include <climits>
using namespace std;
void printdec(int n)
{	//base case 
	if (n == 0)
		return;
	//recursive case 
	cout << n << " ";
	printdec(n - 1);
}
void printinc(int n,int i=1){
	//base case
	if(i>n)
	return ;
	//recursive case
	cout<<i<<" ";
	printinc(n,i+1);


}
int main()
{
	int n;
	cin >> n;
	printdec(n);
	cout << endl;
	printinc(n);
	cout << endl;

}