// function binary operator overloding
#include <iostream>
using namespace std;

class test
{
public:
        int value;
        test();
        test(int i);
        void show();
        test operator+(test &t1);
        test operator+(int i);
};
test ::test(int i)
{
        value = i;
}
void test::show()
{
        cout << "the value is" << value;
}
test test::operator+(test &t1)
{
        value = t1.value + value;
        return value;
}
test test::operator+(int i)
{
        value = value + i;
        return value;
}

int main()
{
        test t2(10), t3(25);
        t2 = t2 + t3;
        t2.show();
        t2 = t3 + 100;
        t2.show();
        return 0;
}
