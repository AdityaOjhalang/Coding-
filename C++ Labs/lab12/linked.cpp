#include <iostream>
#include <cmath>
#include <climits>
using namespace std;

class player
{
    string name;
    int games;
    int avg;

public:
    void getdets()
    {   cout<<"enter name: "<<endl;
        getline(cin,name);
	cin.ignore(numeric_limits<streamsize>::max(), '\n');
        cout<<"enter games: "<<endl;
        cin >> games;
        cout<<"enter avg: "<<endl;
        cin >> avg;
    }
    void print()
    {
        cout << "Name : "<<name << endl;
        cout << "Games : "<<games << endl;
        cout << "Average : "<<avg << endl;
    }
};
int main()
{
    player a[3];
    for (int i = 0; i < 3; i++)
    {   cout<<"Enter details "<<i+1<<endl;
        a[i].getdets();
    }
    for (int i = 0; i < 3; i++)
    {
        a[i].print();
    }
}