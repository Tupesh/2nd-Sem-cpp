#include <iostream>
#include <fstream>
#include <string>
using namespace std;

class Myfile
{
    string mytext;

public:
    Myfile(){};

    // 8.3	Using constructor to open file
    Myfile(const string &name)
    {
        ifstream merofile;
        merofile.open(name);
        if (!merofile.good())
        {
            cout << "File open garna sakiyana hai\n";
        }
        else
        {
            string line;
            while (getline(merofile, line))
            {
                mytext = mytext + line;
            }
        }
    }
    string Contents()
    {
        return mytext;
    }
};

int main()
{
    Myfile obj("hello.txt");
    cout << "Content are : " << obj.Contents() << endl;
    return 0;
}