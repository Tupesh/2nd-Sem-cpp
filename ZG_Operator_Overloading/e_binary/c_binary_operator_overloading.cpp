#include <iostream>
using namespace std;

class binarydemo
{
    int a, b;

public:
    binarydemo()
    {
    }
    binarydemo(int x, int y)
    {
        a = x;
        b = y;
    }
    void display()
    {
        cout << "The value of A is " << a << " and the value of B is " << b << endl;
    }
    binarydemo operator+(binarydemo obj)
    {
        binarydemo temp;
        temp.a = a + obj.a;
        temp.b = b + obj.b;
        return temp;
    }
};

int main()
{
    binarydemo bd(12, 34), bd1(34, 56), bd2;
    bd2 = bd + bd1;
    bd2.display();
    return 0;
}