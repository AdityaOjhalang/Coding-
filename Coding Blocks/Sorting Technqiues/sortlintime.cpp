#include <iostream>
#include <cmath>
#include <climits>
using namespace std;
void print(int a[],int n){
	for(int i=0;i<n;i++){
		cout<<a[i]<<" ";
	}
}
int main(){
	int n;
	cin>>n;
	int arr[n];
	for(int i=0;i<n;i++){
		cin>>arr[i];
	}
	int m[n];
	int f = 0;
	for(int i=0;i<n;i++){
		if(arr[i] == 0){
			m[f]=0;
			f++;
		}
	}
	for(int i=0;i<n;i++){
		if(arr[i] == 1){
			m[f]=1;
			f++;
		}
	}
	for(int i=0;i<n;i++){
		if(arr[i] == 2){
			m[f]=2;
			f++;
		}
	}
	print(m,n);
	
	
}
