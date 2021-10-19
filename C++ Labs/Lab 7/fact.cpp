#include <iostream>
using namespace std;
int findFactorial(int no)
{
    if (no == 2)
    {
        return no;
    }

    return no * findFactorial(no - 1);
}
int main()
{
    int *ptr;
    int no;

    cout << "Enter a number to find factorial : " << endl; cin >> no;
    
    ptr = &no;
    cout << findFactorial(*ptr) << endl;
}