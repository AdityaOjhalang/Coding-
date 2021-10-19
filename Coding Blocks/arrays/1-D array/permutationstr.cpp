#include <iostream>
#include <cmath>
#include <climits>
using namespace std;
void print(int a[],int n){
	for(int i=0;i<n;i++){
		cout<<a[i]<<" ";
	}
	cout<<endl;
}
int main(){
	char a[] = "abbca";
	char b[] = "baabc";
	int freq[26] = {0};
	for(int i=0;a[i]!='\0';i++){
		int ind = a[i] - 'a';//giving us the index value of the letter
		freq[ind]++;//increasing that index value in our function
	}
	print(freq,26);

	for(int i=0;b[i]!='\0';i++){
		int ind = b[i]-'a';
		freq[ind]--;//decrasing the index value in the frequency array
	}
	print(freq,26);
	
	bool isperm = true;
	for(int i=0;i<26;i++){
		if(freq[i]!=0){
			isperm = false;
			break;
		}
	}
	if(isperm==true){
		cout<<"Permutation"<<endl;
	}
	else{
		cout<<"Not permutation"<<endl;
	}
}
