#include <iostream>
#include <cmath>
#include <climits>
using namespace std;
int fact(long long n){
  //base case which is defined to check when the loop should stop 
  //failure of this will lead the function to not know when to stop
  //Leading to Stack overflow
  if(n==0){ 
	  return 1;
  }
  //logical second case 
  else if(n<0){
	  return -1;
  }
  //recursive case 
  else{
	  return n*fact(n-1);
  }
}
int main(){
	long long n;
	cin>>n;
	cout << fact(n) << endl;
	
}