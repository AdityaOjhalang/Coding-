#include <iostream>
#include <cmath>
using namespace std;
int main(){
	int n;
	cin>>n;
	for(int i=1;i<=n;i++){
		int k=1;
		for(int j=1;j<=n-i+1;j++){
			cout<<k<<" ";
			k++;
		}
		
		for (int j = 2; j <i; j++)
		{
			cout <<"* ";
			
		}
		for (int j = 1; j < i; j++) //j<i important thing, I was stuck on it 
		{
			cout <<  "* ";
			
		}
		cout<<endl;
	}
}