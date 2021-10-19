#include <iostream>
#include <cmath>
#include <climits>
using namespace std;
int main(){
	
	int s[] = {7,1,5,3,6,4};
        int n = sizeof(s) / sizeof(int);
	int minprice = INT16_MAX,profit=0;
	for(int d =0 ; d<n;d++){
		if(s[d]<minprice)
		minprice=s[d];
		else
		profit = max(profit,s[d]-minprice);
	}
	cout<<profit<<endl;

}