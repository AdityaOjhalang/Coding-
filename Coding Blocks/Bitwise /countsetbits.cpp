#include <iostream>
#include <cmath>
using namespace std;
int main(){
	int n;
	cin>>n;
	int count=0;
	int m=1;
	while(n){
		if((n&m)==1)
		 count++;
         n>>=1;
	}
	cout<<endl;
	cout<<count;
}