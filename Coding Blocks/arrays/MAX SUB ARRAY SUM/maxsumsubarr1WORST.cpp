#include <iostream>
#include <cmath>
#include <climits>
using namespace std;
int main(){
	
	int arr[] = {1,-2,4,1,-3,5,10};
        int n = sizeof(arr) / sizeof(int);
	int maxsum  =  INT_MIN;
	for(int i=0;i<n;i++){
		for(int j=i;j<n;j++){
			int sum=0;
			for(int k=i;k<j;k++){
				sum = sum + arr[k];
			}
			if(sum>maxsum)
			maxsum = sum;

		}
	}
	cout<<maxsum;
}