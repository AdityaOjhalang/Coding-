#include <iostream>
using namespace std;


class Int {
  private: int num;

  public: void assign(int val = 0) {
    num = val;
  }

  void display() {
    cout<<num<<" "<<endl;
  }

  void difference(Int val1, Int val2) {
    num = val1.num - val2.num;
  }
};

int main() {
  
    Int a;
    Int b;
    b.assign(2);
    Int c;
    c.assign(4);

    a.difference(b, c);
    a.display();
    
    return 0;
}