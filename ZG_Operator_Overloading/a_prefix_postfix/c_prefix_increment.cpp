// Prefix increment(++) operator overloading with return type
#include <iostream>
using namespace std;

class OverloadingDemo
{
private:
    int i;

public:
    OverloadingDemo() : i(15) {}
    // Return type is OverloadingDemo
    OverloadingDemo operator++()
    {
        OverloadingDemo temp;
        ++i;
        temp.i = i;
        return temp;
    }
    void Display()
    {
        cout << "The value of i = " << i << endl;
    }
};
int main()
{
    OverloadingDemo obj, obj1;
    obj.Display();
    obj1.Display();
    obj1 = ++obj;
    obj.Display();
    obj1.Display();
    return 0;
}