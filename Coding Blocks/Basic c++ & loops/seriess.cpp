 #include <iostream>
#include <cmath>
using namespace std;
int main(){
	int number1, number2;
        cin>>number1>>number2;
	int i=1;
	int count=0;
	while(count<=number1){
		int sum = (3*i)+2;
		i++;
		if(sum%number2==0){
			
		}
        else{
            cout<<sum<<endl;
			count++;
        }
	}

}