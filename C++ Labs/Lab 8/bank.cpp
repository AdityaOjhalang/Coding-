#include "iostream"
#include "iostream"
#include "string"
using namespace std;

class Bank{
public:
    string name;
    string acc_num;
    string acc_type;
    int acc_bal = 10000;
    void deposit()
    {
      cout<<"Enter amount to deposit : ";
      int amount; cin>>amount;
      acc_bal += amount;
    }
    void init()
    {
      getline(cin, name);
      getline(cin, acc_num);
      getline(cin, acc_type);
      deposit();
    }
    void withdraw()
    {
      cout<<"Current balance in your account : "<<acc_bal<<endl;
      cout<<"Enter amount to withdraw: "; int amount;
      cin>>amount;
      acc_bal -= amount;
    }
    void display_details()
    {
      cout<<"\nName: "<<name<<"\nAcc Number : "<<acc_num
      <<"\nAcc type: "<<acc_type<<"\nUpdated Balance: "<< acc_bal;
    }
};

int main()
{
  Bank b;
  b.init();
  b.withdraw();
  b.display_details();
}