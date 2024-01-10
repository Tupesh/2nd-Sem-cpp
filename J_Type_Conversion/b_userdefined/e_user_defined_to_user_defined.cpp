// user defined to user defined type conversion using constructor
#include <iostream>
using namespace std;

class Time
{
    int hrs, min;

public:
    Time(int h, int m)
    {
        hrs = h;
        min = m;
    }

    Time()
    {
        cout << "Time's Object Created " << endl;
    }

    int getMinutes()
    {
        int tot_min = (hrs * 60) + min;
        return tot_min;
    }

    void display()
    {
        cout << "Hours : " << hrs << endl;
        cout << "Minutes : " << min << endl;
    }
};

class Minute
{
    int min;

public:
    Minute()
    {
        min = 0;
    }

    void operator=(Time T)
    {
        min = T.getMinutes();
    }

    void display()
    {
        cout << "Total Minutes : " << min << endl;
    }
};

int main()
{
    Time t1(12, 68);
    t1.display();
    Minute m1;
    m1.display();

    // conversion from Time to Minute
    m1 = t1;
    t1.display();
    m1.display();
    return 0;
}