#include <iostream>
#include <cmath>
#include <climits>
using namespace std;
int power(int n , int m){
	//base case 
	if(m==0)
	return 1;
	//recursive case
	return n*(power(n,m-1));
}
int main(){
	int n,m;
	cin>>n>>m;
	cout<<"Power of "<<n<<" raise to the power "<<m<<" is :- "<<power(n,m)<<endl;

}