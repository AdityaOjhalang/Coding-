#include <iostream>
#include <cmath>
using namespace std;
int main(){
	int n;
	cin>>n;
	for(int i=1;i<=n;i++){
		int x=65;
		for(int j=1; j<=n-i+1;j++){
			cout<<char(x)<<" ";
			x++;
		}
		int y = 65+n;
		for(int j=1;j<=n-i+1;j++){
			int l = y-i;
			cout<<char(l)<<" ";
			y--;
		}
		cout<<endl;
	}
}