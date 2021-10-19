#include <iostream>
#include <cmath>
#include <climits>
#include <string>
using namespace std;
void subs(char *in,char *out,int i , int j){
	//base case 
	if(in[i]=='\0'){
		out[j]='0';
		cout<<out<<endl;
		return;
	}
	//recursive case 
	// 1. Ignore the ith character
	subs(in,out,i+1,j);
	// 2. Include the ith character
	out[j]=in[i];
	subs(in,out,i+1,j+1);

}
int main(){
	char in[] = {'a','b','c'};
	char out[100];
	subs(in,out,0,0);

}