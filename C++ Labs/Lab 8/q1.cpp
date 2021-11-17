#include <iostream>
#include <string>
using namespace std;

class Employee{
public:
    int employeeId;
    string employeeName;
    string designation;
    int salary;
    void getEmployee()
    {
      cout<<"Enter employee details :"<<endl;
      cin>>employeeId;
      cin.ignore();
      getline(cin, employeeName);
      cin.ignore();
      getline(cin, designation);
      cin>>salary;
    }
    void showGrade()
    {
      if(salary<20000 && salary>0) cout<<"D Grade";
      if(salary>20001 && salary<50000) cout<<"C Grade";
      if(salary>50001 && salary<100000) cout<<"B Grade";
      if(salary>100001) cout<<"A Grade";
    }
    void showEmployee()
    {
      cout<<"Employee grade is: ";showGrade();cout<<endl;
      cout<<"Employee details are :\n";
      cout<<"Employee ID="<<employeeId<<"\nEmployee Name="<<
      employeeName<<"\nDesignation="<<designation<<"\nSalary="<<salary;
    }
};

int main()
{
  Employee e1;
  e1.getEmployee();
  e1.showEmployee();
}