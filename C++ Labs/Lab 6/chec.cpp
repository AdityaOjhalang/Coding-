#include <iostream>
#include <cmath>
#include <climits>
using namespace std;
int update(int a){
	int ans=a+1;
	return ans;
}
int main(){
	int n=10;
	cout<<"1st "<<n;
	int f = update(n);
	cout<<f;

}