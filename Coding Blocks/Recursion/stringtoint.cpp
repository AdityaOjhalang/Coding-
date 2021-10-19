#include <iostream>
#include <cmath>
#include <climits>
#include <string>
using namespace std;
int stringtoint(char *a , int n){
	//base case
	if(n==0)
	return 0;

	//recursive case 
	char ch = a[n-1];
	int dig =  ch - '0';
	return stringtoint(a,n-1)*10 + dig ;
}
int main(){
	char a[] = {"1234"};
	int n  = strlen(a);
	cout<<stringtoint(a,n)<<endl; 
}