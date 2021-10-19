#include <iostream>
#include <cmath>
#include <climits>
using namespace std;
void print(int a[],int n){
	for(int i=0;i<n;i++){
		cout<<a[i]<<" ";
	}
}
int numtoarr(int n){
	int a[n];
	int i=0;
	int k = n;
	while(k>0){
		a[i] = n%10;
		i++;
		n=n/10;
	}
	
	return a[n];
}
int main(){
	int n = 12345;
	int a[n];
	a[n] = numtoarr(n);
	print(a,n);

}