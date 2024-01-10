// Prefix increment(++) operator overloading with no return type
#include <iostream>
using namespace std;

class OverloadingDemo
{
private:
    int i;

public:
    OverloadingDemo() : i(15)
    {
    }
    void operator++()
    {
        ++i;
    }
    void Display()
    {
        cout << "The value of i =" << i << endl;
    }
};

int main()
{
    OverloadingDemo obj;
    // Displays the value of data member i for object obj
    obj.Display();
    // Invokes operator function void operator ++( )
    ++obj;
    // Displays the value of data member i for object obj
    obj.Display();
    return 0;
}