#include <iostream>
#include <cmath>
#include <climits>
using namespace std;
int main()
{
	int a[3][4] = {{1, 2, 3, 4}, {5, 6, 7, 8}, {9, 10, 11, 12}};
	int r = 3;
	int c = 4;
	for(int i=0;i<c;i++){
		if(i%2==0){// if the coloumn is even prin bottom to top
			for(int j=0;j<r;j++){
				cout<<a[j][i] << " ";
			}
			cout<<endl;
		}
		else{// if coloumn is odd print bottom to top
			for(int j=r-1;j>=0;j--){
				cout<<a[j][i] << " ";
			}
			cout<<endl;
		}
	}
}