#include <iostream>
#include <string>
#include <vector>
using namespace std;
int a = 10; // declared outside main
int main()
{
	int a = 15; // declared inside main
	cout<<"Local a = "<<a<<" Global a ="<<::a<<endl;
	cout<<sizeof(:a)<<endl;
}
