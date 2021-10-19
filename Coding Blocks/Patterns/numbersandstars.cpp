#include <iostream>
#include <cmath>
using namespace std;
int main(){
	int n;
	cin>>n;
	for(int i=1;i<=n;i++){
		int k=1;
		for(int j=1;j<=i;j++){
			cout<<k;
			k++;
		}
		for(int j=1;j<=n-i;j++){
			cout<<"*";
		}
		cout<<endl;
	}
}