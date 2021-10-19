#include <iostream>
#include <cmath>
#include <climits>
using namespace std;
void bubblesort(int a[],int n)
{
	
	for(int i=0;i<n;i++)
		{
			for(int j=0;j<n-i-1;j++)
				{
					if(a[j]>a[j+1])
						{
							swap(a[j],a[j+1]);
						}					
				}
		}
}
int main(){
	int n;
	cin >> n;
	int a[n];
	int b[n];
	for(int i=0;i<n;i++){
		cin>>a[i];

	}
	for(int j=0;j<n;j++){
		cin>>b[j];
	}
	bubblesort(a,n);
	bubblesort(b,n);
	cout<<"[ ";
	for(int i=0;i<n;i++){
		if(a[i]^b[i]==0)
		cout<<a[i]<<", ";
	}
	cout<<"]";
} 
