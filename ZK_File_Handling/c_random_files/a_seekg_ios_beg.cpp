#include <iostream>
#include <fstream>
using namespace std;

int main()
{
    ofstream myfile;
    ifstream file;
    char ch[20];
    char text;

    cout << "Enter your strings :";
    cin.getline(ch, 20);

    myfile.open("hello.txt", ios::out);
    if (myfile)
    {
        myfile << ch;
        cout << "Data inserted successfully..." << endl;
    }
    else
    {
        cout << "Something went wrong" << endl;
    }

    myfile.close();

    file.open("hello.txt", ios::in);
    if (file)
    {
        file.seekg(-4, ios::end);
        cout << "Result of last 4 bytes : ";
        while (!file.eof())
        {
            file.get(text);
            cout << text;
        }
    }
    else
    {
        cout << "Something went wrong..." << endl;
    }
    file.close();
    return 0;
}