#include <iostream>
#include <map>
using namespace std;
int main()
{
	map<char, int> Lamp;
	char characterrr;

	Lamp['a'] = 101;
	Lamp['d'] = 202;
	Lamp['e'] = 303;

	for (characterrr = 'a'; characterrr < 'f'; characterrr++)
	{
		cout << characterrr;
		if (Lamp.count(characterrr) > 0)
			cout << " is an element of Lamp.\n";
		else
			cout << " is not an element of Lamp.\n";
	}

	return 0;
}