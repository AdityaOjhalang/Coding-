#include <iostream>
#include <cmath>
#include <climits>
using namespace std;
string a[100] = {"zero","one","two","three","four","five","six","seven","eight","nine"};
void strtonum(int n){
	//base case
	if(n==0)
	return;
	//recusrive case
	strtonum(n/10);// Why is it here ? -> to print in correct order 2048 function called before printing 
	int r = n%10;
	cout<<a[r]<<" ";
}
int main(){
	int n;
	cin>>n;
	strtonum(n);


}
