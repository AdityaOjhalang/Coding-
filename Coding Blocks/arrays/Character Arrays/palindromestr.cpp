#include <iostream>
#include <cmath>
#include <climits>
using namespace std;
int length(char *a){
	int i;
	for(i=0 ;a[i] != '\0';i++){}
	return i;
}
bool ispalindrome(char *a){
	int i=0;
	int len  = length(a);
	int j=len-1;
	while(i<j){
		if(a[i]!=a[j]){
			return false;
		}
		i++;j--;
	}
	return true;

}
int main(){
	char a[100];
	cin>>a;
	if(ispalindrome(a)){
		cout<<"Palindrome"<<endl;
	}
	else{
		cout<<"Not Palindrome"<<endl;
	}
}