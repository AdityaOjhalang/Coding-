#include <iostream>
#include <cmath>
#include <climits>
using namespace std;
void intersection(int *a , int *b , int n){
	int i = 0;
	int j = 0;
	while(i<=n){
		if(a[i] == b[j]){
			cout<<a[i];
			i++;j++;
		}
		else if(a[i]<b[j]){
			i++;
		}
	}

}
int main(){
	int n;
	cin >>n;
	int a[n],b[n];
	for(int i=0;i<n;i++){
		cin>>a[i];
	}
	for(int i=0;i<n;i++){
		cin>>b[i];
	}
	intersection(a,b,n);
}