#include <iostream>
#include <vector>
using namespace std;
int main(){
	int n;
	cin>>n;
	//vector<int> v;
	vector<int> v(n,10);
	v.reserve(20);
	for(int i=0;i<5;i++){
		
		v.push_back(5-i) ;
	}
	//capacity of vector automatically doubles up when it becomes full
	cout << "Size :" << v.size() << endl;//total elements in a vector
	cout << "Capacity :" << v.capacity()<<endl;//total elements a vector can hold at that moment
	 
	for(int i=0;i<5;i++){
		cout << v[i] << " ";
	}
	cout<<endl;
	//sorting  a vector
	sort(v.begin(),v.end());
	for(int i=0;i<5;i++){
		cout << v[i] << " ";
	}
	cout<<endl;


}