#include <iostream>
#include <cmath>
using namespace std;
int main(){
	int n;
	cin>>n;
	int arr[n];
	for(int i=0;i<n;i++){
		cin>>arr[i];
	} 
	int swapp = 0;
	for(int i=0 ; i<n-1;i++){
		int min =i;
		bool istrue = false;
		for(int j=i+1;j<n;j++){
			if (arr[j]<arr[min])
			{	min =j;
			       
				istrue = true;
			}
		}
		if(istrue == true){
			swap(arr[min],arr[i]);
			swapp++;
		}
		
		
	}
	cout<<swapp;

}