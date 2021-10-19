#include <iostream>
#include <cmath>
#include <climits>
using namespace std;
int main(){
	int arr[] = {3,5,1,6,7,9};
        int n = sizeof(arr) / 4;
	int k;
	cin>>k;
	int p=0;
	for(int i=0;i<n;i++){
		if((k^arr[i])==0){
		cout<<i<<endl;
		p++;
		break;}
	}
	if(p==0&&k<=n){
		if(k==0){
			cout<<0<<endl;
		}
		else
		cout<<k-1<<endl;
	}


}