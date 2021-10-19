#include <iostream>
#include <cmath>
#include <climits>
using namespace std;
// used a for loop in this
void bubblesort(int *a , int n,int i=0){
	//base case
	if(i==n-1)
	return;
	//recursive case
	for(int j=0;j<n-i-1;j++){
		if(a[j] > a[j+1]){
			swap(a[j],a[j+1]);
		}
	}
	bubblesort(a,n,i+1);
		
	
}
void bubblesort1(int *a , int n,int i=0, int j){
	//base case
	if(i==n-1)
	return;
	//recursive case
	if(j<n-i-1){
		if(a[j] > a[j+1]){
			swap(a[j],a[j+1]);
		}
		bubblesort1(a,n,i,j+1);
	}
	bubblesort1(a,n,i+1,0);
}

void print(int a[],int n){
	for(int i=0;i<n;i++){
		cout<<a[i]<<" ";
	}
         cout<<endl;
}
int main(){
	
	int a[] = {5, 4, 3, 2, 1};
        int n = sizeof(a) / sizeof(int);
	int k=n;
	bubblesort(a,k);
	print(a,n);\
}