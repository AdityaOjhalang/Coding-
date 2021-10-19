#include <iostream>
#include <cmath>
#include <climits>
using namespace std;
int main(){
	int a[] = {0,1,-2,4,1,-3,5};
        int n = sizeof(a) / sizeof(int);
	int maxsum  =  INT_MIN;
	int sum=0;
	for(int i =0;i<n;i++){
		sum += a[i];
		if(sum<0){
			sum = 0;
		}
		maxsum = max(sum,maxsum);
	}
	cout<<maxsum<<endl;
}