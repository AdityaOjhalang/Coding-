#include <iostream> 
using namespace std;
struct Student
{
    char name[50];
    int rool;
    struct birthdate
    {
        int date;
        int month;
        int year;
    };
    struct birthdate dob;
};
void print(Student s1){
    cout<<s1.name<<" "<<s1.rool<<" "<<s1.dob.date<<"/"<<s1.dob.month<<"/"<<s1.dob.year;
}
int main()
{
    Student s1;
    cin.get(s1.name,50);
    cin>>s1.rool;
    cin>>s1.dob.date;
    cin>>s1.dob.month;
    cin>>s1.dob.year;
    print(s1);
    cout<<" "<<endl;
}
