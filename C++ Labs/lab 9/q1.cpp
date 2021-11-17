#include <iostream>
using namespace std;
//define class Mammals
class Mammals{
 public:
 void display1() {
 cout << "I am mammal" << endl;
 }
};
//define class MarineAnimals
class MarineAnimals {
 public:
 void display2() {
 cout << "I am a marine animal" << endl;
 }
};
//define class BlueWhale
class BlueWhale : public Mammals, public MarineAnimals {
 public:
 void display3() {
 cout << "I belong to both the categories: Mammals as well as Marine Animals" << endl;
 }
};
int main()
{
 Mammals m; //object for class Mammals
 MarineAnimals ma; //object for class MarineAnimals
 BlueWhale bw; //object for class BlueWhale
 
 m.display1(); 
 ma.display2(); 
 bw.display3(); 
 bw.display1(); 
 bw.display2(); 
 return 0;
}