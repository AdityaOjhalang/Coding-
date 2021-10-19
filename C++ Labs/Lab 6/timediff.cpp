#include <iostream>
using namespace std;
struct time
{	int hour;
	int mins;
	int secs;
}
t1, t2, diff;
int main(){
	cin>>t1.hour;
	cin>>t1.mins;
	cin>>t1.secs;

	cin>>t2.hour;
	cin>>t2.mins;
	cin>>t2.secs;

	diff.hour = t1.hour - t2.hour;
	diff.mins = t1.mins - t2.mins;
	diff.secs = t1.secs - t2.secs;
	cout<<t1.hour<<":"<<t1.mins<<":"<<t1.secs<<" - "<<t2.hour<<":"<<t2.mins<<":"<<t2.secs<<" = ";
	cout<<diff.hour<<":"<<diff.mins<<":"<<diff.secs<<endl;

}
