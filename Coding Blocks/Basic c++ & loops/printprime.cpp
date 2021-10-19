#include<iostream>
using namespace std;
void checkprime(int n){
        int count=0;
	for (int i = 2; i < n; i++)
	{
		if (n % i == 0)
		{
			count++;
		}
	}
	if (count == 0)
	{
		cout << "Prime" ;
	}
	else{
		cout<< "Non Prime";
	}
	
}
int main() {
	int n;
	cin >> n;
	
		checkprime(n);
}