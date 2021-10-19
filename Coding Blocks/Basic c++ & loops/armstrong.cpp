#include <iostream>
#include <cmath>
#include <climits>
using namespace std;
int main(){
	int n,sum=0,num,dig=0;
	cin>>n;
	num =n;
	int f = n;
	if(n==0){
		cout<<"true";
	}
	while(f>0){
             int r = f%10;
	     f=f/10;
	     dig++;
	}
	
	while(n>0){
             int r = n%10;
	     n=n/10;
	     int l = pow(r,dig);
	     sum = sum + l;
	}
	if(sum == num){
             cout<<"true";
	}
	else{
		cout<<"false";
	}
	
}