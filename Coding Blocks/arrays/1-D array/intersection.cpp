#include <iostream>
#include <cmath>
#include <climits>
using namespace std;
void swap(int *xp, int *yp)
{
    int temp = *xp;
    *xp = *yp;
    *yp = temp;
}
 
void selectionSort(int arr[], int n)
{
    int i, j, minimumindex;
 
    // One by one move boundary of unsorted subarray
    for (i = 0; i < n-1; i++)
    {
        // Find the minimum element in unsorted array
        minimumindex = i;
        for (j = i+1; j < n; j++)
        if (arr[j] < arr[minimumindex])
            minimumindex = j;
 
        // Swap the found minimum element with the first element
        swap(&arr[minimumindex], &arr[i]);
    }
}
 
 void intersection(int a[] , int b[] , int n){
	int i = 0;
	int j = 0;
	while(i<=n){
		if(a[i] == b[j]){
			cout<<a[i]<<", ";
			i++;j++;
		}
		else if(a[i]<b[j]){
			i++;
		}
		else
		j++;
	}

}
int main(){
	int n;
	cin >>n;
	int a[n];
	int b[n];
	for(int i=0;i<n;i++){
		cin>>a[i];
	}
	for(int i=0;i<n;i++){
		cin>>b[i];
	}
	selectionSort(a,n);
	selectionSort(b,n);
	cout<<"[";
	intersection(a,b,n);
	cout<<"]";
}