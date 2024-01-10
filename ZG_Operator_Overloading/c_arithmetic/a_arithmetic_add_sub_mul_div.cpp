#include <iostream>
using namespace std;
class Arithmatic
{
    float num;
public:
    void accept()
    {
        cout << "Enter Number :";
        cin >> num;
    }
    Arithmatic operator+(Arithmatic &a)
    {
        Arithmatic t;
        t.num = num + a.num;
        return t;
    }
    Arithmatic operator-(Arithmatic &a)
    {
        Arithmatic t;
        t.num = num - a.num;
        return t;
    }
    Arithmatic operator*(Arithmatic &a)
    {
        Arithmatic t;
        t.num = num * a.num;
        return t;
    }
    Arithmatic operator/(Arithmatic &a)
    {
        Arithmatic t;
        t.num = num / a.num;
        return t;
    }
    void display()
    {
        cout << num << endl;
    }
};

int main()
{
    Arithmatic a1, a2, a3;

    a1.accept();
    a2.accept();
    a3 = a1 + a2;
    cout << "Addition of Two Numbers :" << endl;
    a3.display();
    a3 = a1 - a2;
    cout << "Subtraction of Two Numbers :" << endl;
    a3.display();
    a3 = a1 * a2;
    cout << "Multiplication of Two Numbers :" << endl;
    a3.display();
    a3 = a1 / a2;
    cout << "Division of Two Numbers :" << endl;
    a3.display();

    return 0;
}