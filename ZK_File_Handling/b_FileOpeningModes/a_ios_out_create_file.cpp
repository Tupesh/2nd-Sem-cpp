#include <iostream>
#include <fstream>
using namespace std;

int main()
{
    fstream my_file;
    my_file.open("my_file", ios::out);
    if (!my_file)
    {
        cout << "File cannot be created....";
    }
    else
    {
        cout << "File created...";
        my_file.close(); // to closes opened file, flushes the streams, to release allocated memory
    }
    return 0;
}