#include <iostream>
#include <cmath>
#include <climits>
using namespace std;
int main(){
	int n  ; 
	cin>>n;
	int a[n];int b[n];
	for(int i=0;i<n;i++){
		cin>>a[i];
	}
	for(int i=0;i<n;i++){
		cin>>b[i];
	}
        int m[n];
	for(int i=0;i<n;i++){
		int k = a[i];
		m[k] = i;
	}
	bool istrue = true;
	for(int i=0;i<n;i++){
		if((b[i]^m[i])!=0){
			istrue = false;
			break;
		}
	}
	if(istrue == true){
		cout<<"true";
	}
	else{
		cout<<"false";
	}

}
