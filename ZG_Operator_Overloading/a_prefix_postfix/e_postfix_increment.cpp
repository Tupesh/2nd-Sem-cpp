// Postfix Increment ++ Operator Overloading
#include <iostream>
using namespace std;

class OverloadingDemo
{
private:
    int i;

public:
    OverloadingDemo() : i(15) {}
    OverloadingDemo operator++()
    {
        OverloadingDemo temp;
        temp.i = ++i;
        return temp;
    }
    // Notice int inside barcket which indicates postfix increment.
    OverloadingDemo operator++(int)
    {
        OverloadingDemo temp;
        temp.i = i++;
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

    // Operator function is called, only then value of obj is assigned to obj1
    obj1 = ++obj;
    obj.Display();
    obj1.Display();

    // Assigns value of obj to obj1, only then operator function is called.
    obj1 = obj++;
    obj.Display();
    obj1.Display();
    return 0;
}