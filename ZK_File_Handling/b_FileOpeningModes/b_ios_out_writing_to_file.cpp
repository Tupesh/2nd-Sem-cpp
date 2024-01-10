#include <iostream>
#include <fstream>
using namespace std;

int main()
{
    fstream my_file;
    my_file.open("my_file.txt", ios::out);
    if (!my_file)
    {
        cout << "File cannot be created....";
    }
    else
    {
        cout << "File created...";
        my_file << "Hello Sanothimi....";
        my_file.close();
    }
    return 0;
}