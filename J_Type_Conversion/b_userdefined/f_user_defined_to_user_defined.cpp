// user defined to user defined type conversion using type conversion function
#include <iostream>
using namespace std;

class InventoryOne
{
    int ino, qty;
    float rate;

public:
    InventoryOne(int n, int q, float r)
    {
        ino = n;
        qty = q;
        rate = r;
    }

    InventoryOne()
    {
        cout << "InventoryOne's Object Created" << endl;
    }

    int getino()
    {
        return (ino);
    }

    float getamt()
    {
        return (qty * rate);
    }
    void display()
    {
        cout << "ino = " << ino << " qty = " << qty << " rate = " << rate << endl;
    }
};

class InventoryTwo
{
    int ino;
    float amount;

public:
    void operator=(InventoryOne I)
    {
        ino = I.getino();
        amount = I.getamt();
    }

    void display()
    {
        cout << "ino = " << ino << " amount = " << amount << endl;
    }
};

int main()
{
    InventoryOne I1(4568, 35, 67);
    InventoryTwo I2;
    I2 = I1;

    // InventoryTwo I2=I1;
    I1.display();
    I2.display();
    return 0;
}