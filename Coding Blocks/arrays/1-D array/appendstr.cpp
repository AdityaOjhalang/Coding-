#include <iostream>
#include <cmath>
#include <climits>
using namespace std;
int length(char *a){
	int i;
	for(i=0 ;a[i] != '\0';i++){}
	return i;
}
void append(char *a , char *b){
	int i = length(a);  
	int lenb = length(b);
	int j=0;
	while(j<=lenb){
		a[i] = b[j];
		i++;
		j++;
	}
}
int main(){
	char a[100] = "Hello";
	char b[] = "world";
	append(a,b);
	cout<<a;
}
