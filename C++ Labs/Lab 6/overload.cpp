#include <iostream>
using namespace std;
void repeat(char c = '*',int n=10){
	for(int i=0;i<n;i++){
		cout<<c;
	}
	cout<<endl;
}
int main(){
	char a,b;
	int n=7;
	repeat();
	repeat('+');
	repeat('$',7);

}