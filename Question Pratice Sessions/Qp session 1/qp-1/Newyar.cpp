#include <iostream>
#include <cmath>
#include <climits>
using namespace std;
int main(){ 
	int a[] = {-1,1,5,3,4,2};//we use -1 to ignore the 1st index;
	int n = 5;
	int bribe = 0;
	bool istoochaotic = false;
	for (int i = n; i >= 1; i--)
	{
		if (i != a[i])
		{
			if (i == a[i - 1])
			{
				swap(a[i], a[i - 1]);
				bribe+=1;
			}
		 	else if (i == a[i-2] ){
				 swap(a[i-1],a[i-2]);
				 swap(a[i-1], a[i]);
				 bribe+=2;
			}
			else{
				cout<<"Too Chaotic"<<endl;
				istoochaotic=true;
				break;

			}
		}
	}
	if(istoochaotic == false)
	cout<<bribe<<endl;
}