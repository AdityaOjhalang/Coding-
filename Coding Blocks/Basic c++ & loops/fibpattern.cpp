#include <iostream>
#include <cmath>
using namespace std;
int main(){
	int n;
	cin>>n;
	int a=0;
	int b=1;
	int c=a+b;
	for(int i=1; i <=n ; i++){
		for(int j=1;j<=i;j++){
			if((i==1)&&(j==1)){
				cout<<"0 ";
			}
			else if((i==2)&&(j==1)){
				cout<<"1 ";
			}
			else{
				cout<<c<<" ";
				a = b;
				b = c;
				c = a+b;
			}
		}
		cout<<endl;
	} 
}