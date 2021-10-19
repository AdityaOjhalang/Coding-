#include <iostream>
#include <cmath>
#include <climits>
using namespace std;
int fib(int n){
	//base case
	if(n==0 || n==1)
	return n;
	//recursive case 
	int a = fib(n-1) + fib(n-2);
	return a;
	}
int main(){
	int n;
	cin>>n;
	cout<<fib(n)<<endl;


}
