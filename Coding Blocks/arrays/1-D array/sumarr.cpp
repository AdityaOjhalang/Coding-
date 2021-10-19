#include <iostream>
#include <cmath>
#include <climits>
using namespace std;
int arrsum(int arr[],int n){
	int sum=0;
	for(int i=0;i<n;i++){
		sum += arr[i];

	}
	return(sum);
}
int main(){
	int arr[] = {5, 4, 3, 2, 1};
         
	int n = sizeof(arr) / sizeof(int);
        cout<< arrsum(arr,n) <<endl;
}