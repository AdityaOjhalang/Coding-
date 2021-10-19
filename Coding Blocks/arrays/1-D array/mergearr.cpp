#include <iostream>
#include <cmath>
#include <climits>
using namespace std;
int merge(int a[] , int b[] , int m , int n){
	int i = m-1;
	int j = n-1;
	int k = m+n-1;
	while(i >=0 and j>=0){
		if(a[i] > b[j]){
			a[k]=a[i];
			i--;
			k--;
		}
		else{
			a[k]=a[j];
			j--;k--;
		}
	}
	while(j>=0){
		a[k] = b[j];
		j--;
		k--;
	}

}
int main(){
	int m[] = {1,3,4,6,7,9};
	int n[] = {2,5,8};
	int m1 = sizeof(m)/sizeof(int);
	int n1 = sizeof(n)/sizeof(int);

}