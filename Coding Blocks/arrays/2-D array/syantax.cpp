#include <iostream>
#include <cmath>
#include <climits>
using namespace std;
int main(){
	int a[4][4];//datatype[rows][coloums];
	int a1[3][3] = {{1,2,3},{4,5,6},{7,8,9}};//intialization of a 2d array
	int a2[][3]  = {{1,2,3} , {4,5,6}};//at initialization you can skip row but not coloumn
	char c[][7]  = {{'a','d','i','t','y','a','\0'},{'t','o','m','\0'}};//need to add '\0' in order to provied null to stop
	char d[][7]  = {{"aditya"},{"ojha"}};
	cout<<c[0]<<endl;
	cout<<d[1]<<endl;
	//printing a 2d array 
	for(int r=0;r<3;r++){
		for(int c=0;c<3;c++){
			cout<<a1[r][c]<<" ";
		}
		cout<<endl;
	}
	// printing a 2d character array;
	for(int i=0;i<2;i++){
		cout<<c[i]<<endl;
	}

}
