// pre increment operator
#include <iostream>
using namespace std;

int main()
{
    int b = 10, a;

    a = ++b;
    cout << "Pre Increment Operation" << endl;

    // Value of a will change
    cout << "a = " << a << endl;

    // Value of b change before execution of a=++b;
    cout << "b = " << b;
    return 0;
}
