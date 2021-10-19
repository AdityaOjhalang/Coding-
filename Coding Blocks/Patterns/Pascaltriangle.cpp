#include <iostream>
#include <cmath>
using namespace std;
void bc(int n ,  int k){
int res = 1;
    if (k > n - k)
    k = n - k;
    for (int i = 0; i < k; ++i)
    {
        res *= (n - i);
        res /= (i + 1);
    }
     
    cout<<res<<" ";

}

int main(){
	int n;
	cin>>n;
	for(int i=0 ; i<n ; i++){
		for(int j=0;j<=i;j++){
			bc(i,j);
		}
		cout<<endl;
	}
}