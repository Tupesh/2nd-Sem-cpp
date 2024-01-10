// reading content from a file
#include <iostream>
#include <fstream>
using namespace std;
int main()
{
    string srg;
    ifstream filestream("merofile.txt");
    if (filestream.is_open())
    {
        while (getline(filestream, srg))
        {
            cout << srg << endl;
        }
        filestream.close();
    }
    else
    {
        cout << "No such file found." << endl;
    }
    return 0;
}