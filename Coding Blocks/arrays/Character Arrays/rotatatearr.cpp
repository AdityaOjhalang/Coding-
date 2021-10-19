#include <iostream>
#include <cmath>
#include <climits>
using namespace std;
int length(char *a){
	int i;
	for(i=0 ;a[i] != '\0';i++){}
	return i;
}
int main(){
	char a[100] = "Coding";
	int lena  =  length(a);
	int n = 4;
	int i = lena -1 ;
	while(i>=0){
		a[i+n] = a[i];
		i--;
	}
	i =lena;//putting value of lena in i cause we need to put the value of lena a while defining '\0'
	int j = 0;
	while(j<n){
		a[j] = a[i];
		j++;i++;
	}
	a[lena] = '\0';
	cout<<a<<endl;

}