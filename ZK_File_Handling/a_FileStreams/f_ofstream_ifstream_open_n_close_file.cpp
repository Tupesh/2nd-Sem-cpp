// Opening and Closing a File
/* C++ Opening and Closing a File
 * This program demonstrates, how
 * to open a file to store or retrieve
 * information to/from it. And then how
 * to close that file after storing
 * or retrieving the information to/from it. */

#include <iostream>
#include <string.h>
#include <fstream>
#include <stdlib.h>
using namespace std;

int main()
{
    ofstream fout;
    ifstream fin;
    char fname[20];
    char rec[80], ch;

    cout << "Enter file name: ";
    cin.get(fname, 20);

    fout.open(fname, ios::out);

    if (!fout)
    {
        cout << "Error in opening the file " << fname;
        exit(1);
    }
    cin.get(ch);

    cout << "\nEnter a line to store in the file:\n";
    cin.get(rec, 80);
    fout << rec << "\n";
    cout << "\nThe entered line stored in the file successfully..!!";
    cout << "\nPress any key to see...\n";
    fout.close();

    fin.open(fname, ios::in);
    if (!fin)
    {
        cout << "Error in opening the file " << fname;
        cout << "\nPress any key to exit...";
        exit(2);
    }

    cin.get(ch);
    fin.get(rec, 80);
    cout << "\nThe file contains:\n";
    cout << rec;
    cout << "\n\nPress any key to exit...\n";
    fin.close();
    return 0;
}