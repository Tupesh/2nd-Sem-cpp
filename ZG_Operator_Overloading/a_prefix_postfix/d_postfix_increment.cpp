// post increment operator
#include <iostream>
using namespace std;

int main()
{
    int b = 10, a;

    a = b++;
    cout << "Post Increment Operation" << endl;

    // Value of a will not change
    cout << "a = " << a << endl;

    // Value of b will be change after execution of a=b++;
    cout << "b = " << b;
    return 0;
}
