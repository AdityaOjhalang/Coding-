#include <iostream>
#include <cmath>
#include <climits>
using namespace std;
void readstring(char *a){
	char ch = cin.get();
	int i = 0;
	while(ch!='\n'){
		a[i] = ch;
		i++;
		ch = cin.get();
	}
	a[i] = '\0';//Need to define it otherwise there might be some garbage value there
}
int main(){
	char a[100];
	// readstring(a);
	// one another way to do this is 
	// delimeter
	cin.getline(a,100,'$');//input the array and the number of permissible inputs 
	// dollar is deliemeter ( wahan tak hi input lega sirf)
	cout<<a<<endl;


}