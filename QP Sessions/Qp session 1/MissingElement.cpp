#include <iostream>
#include <cmath>
#include <climits>
using namespace std;
int main(){
         int arr[] = {0,4,2,3,1};
         int n = sizeof(arr) / 4;
        //  int sum = n*(n+1)/2;
	//  int asum = 0;
	//  for(int i=0;i<n;i++){
	// 	asum+=arr[i];
	//  }
	// //  int ans = sum - asum;
	// //  cout<<endl<<ans<<endl;

	//  //2nd way
	 int ans=0;
	 for(int i=0;i<n;i++){
		 ans^=arr[i];
	 }
	 for(int i=0;i<=n;i++){
		 ans^=i;
	 }
	 cout<<"Missing number = "<<ans<<endl;
}