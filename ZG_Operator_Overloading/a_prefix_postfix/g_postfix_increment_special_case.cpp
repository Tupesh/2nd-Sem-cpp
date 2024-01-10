// special case of post increment operator
#include <iostream>
using namespace std;

int main()
{
    int a = 10;
    cout << "Value of a before post-incrementing" << endl;
    cout << "a = " << a << endl;
    a = a++;
    cout << "Value of a after post-incrementing" << endl;
    // Value of a will not change
    cout << "a = " << a;
    return 0;
}
