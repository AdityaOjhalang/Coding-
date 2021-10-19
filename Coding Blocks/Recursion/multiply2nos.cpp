#include <iostream>
#include <cmath>
#include <climits>
using namespace std;
int mult(int a,int b){
	//base case
	if(a==0 || b==0)
	return 0;
	//recursive case 
	int ans = a + mult(a,b-1);
	return ans;
}
int main(){
	int a,b;
	cin>>a>>b;
	cout<<mult(a,b)<<endl;
}