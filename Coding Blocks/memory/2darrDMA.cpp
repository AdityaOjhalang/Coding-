#include <iostream>
#include <cmath>
#include <climits>
using namespace std;
int main(){
	int n,m;
	cin>>n>>m;
	int **a = new int * [n];
	for(int i=0;i<n;i++){
		a[i] = new int [m];
	}
	int num =1;
	for(int i=0;i<n;i++){
		for(int j=0;j<m;j++){
			a[i][j] = num++;
		}
	}

	for(int i=0;i<n;i++){
		for(int j=0;j<m;j++){
			cout<<a[i][j]<<" ";
		}
		cout<<endl;
		
	}
	
}