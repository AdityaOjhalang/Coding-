#include <iostream>
#include <cmath>
#include <climits>
using namespace std;
class Car
{
public:
	string name;
	//char nameee[1000];
	int mileage;
	int seats;
	int price;

	//  using default constructor
	Car()
	{
		cout << "Inside default constructor" << cout << endl
		     << endl;
	}
	// Parameterized constructor
	// Even changing the order or the datype then we will get a new parameterized constructor
	Car(string n, int m, int s, int p)
	{
		cout << "Inside Parameterized constructor" << cout << endl
		     << endl;
		name = n;
		mileage = m;
		seats = s;
		price = p;
	}
	//copy constructor ( if we pass by value and write Car(Car X) it will lead to a infinnte recurive
	// call of the copy constructor) hence passed by reference .
	Car(Car &X)
	{	cout << "Inside Copy constructor" << endl;
		
		name = X.name;
		mileage = X.mileage ;
		seats = X.seats ;
		price = X.price ;
	}

	void print()
	{
		cout << "name :- " << name << endl;
		cout << "mileage :- " << mileage << endl;
		cout << "seats :- " << seats << endl;
		cout << "price :- " << price << endl
		     << endl;
	}
};
int main()
{
	cout << endl;
	Car A;
	A.name = "BMW";
	//strcpy(A.nameee, "BMW"); // array me aise hi nahi dalta
	A.mileage = 100;
	A.seats = 6;
	A.price = 40000000;
	A.print();

	Car B("BMW", 45, 8, 90000);
	B.print();

	//Copy Constructor
	Car D = B;
	D.print();
}