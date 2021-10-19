#include <iostream>
#include <cmath>
using namespace std;
int main(){
	int a,b,c,d,e;
	cin>>a>>b>>c>>d>>e;
	if((a>=b) && (a>=c) && (a>=d) && (a>=e)){
		cout<<a;
	}
	else if((b>=a) && (b>=c) && (b>=d) && (b>=e)){
		cout<<b;
	}
	else if((c>=b) && (c>=a) && (c>=d) && (c>=e)){
		cout<<c;
	}
	else if((d>=b) && (d>=c) && (d>=a) && (d>=e)){
		cout<<d;
	}

	else{
		cout<<e;
	}
}