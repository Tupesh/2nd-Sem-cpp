#include <iostream>
using namespace std;

int main()
{
    int a = 41;
    int b;

    // Value of a will not be increased before assignment.
    b = a++;
    cout << "Value of a++ is :" << b << endl;

    // After expression value of a is increased
    cout << "Value of a is :" << a << endl;

    // Value of a will be increased before assignment.
    b = ++a;
    cout << "Value of ++a is  :" << b << endl;
    return 0;
}