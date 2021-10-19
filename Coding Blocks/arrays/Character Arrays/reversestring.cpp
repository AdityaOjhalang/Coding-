#include <iostream>
#include <cmath>
#include <climits>
using namespace std;
int length(char *a){
	int i;
	for(i=0 ;a[i] != '\0';i++){}
	return i;
}
void rev(char *a , int n ){
	int i =0;
	int j = n-1;
	while(i<j){
		swap(a[i],a[j]);
		i++;
		j--;
	}
	
}
int main(){
	char a[100];
	cin.getline(a,100);
	int n = length(a);
	rev(a,n);
	cout<<a<<endl;

}