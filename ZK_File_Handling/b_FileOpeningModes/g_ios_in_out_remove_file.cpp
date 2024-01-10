/*Remove(), Rename() function Example: CompanyDemo*/
#include <fstream>  //required for file operation:
#include <iostream> //required for input/output:
using namespace std;

int main()
{
    fstream fp, fp1; // file pointer:
    char text[50];   // variable to store text from user:
    char ch;         // variable to read data from file:

    cout << "Enter some Text here: " << endl;
    cin.getline(text, 50);

    fp.open("CompanyDemo.txt", ios::out); // file open for writing:
    if (fp)                               // error checker:
    {
        fp << text;
        cout << " file Create Successfully: " << endl;
    }
    else
        cout << " Error While Opening file: " << endl;
    fp.close();

    fp.open("CompanyDemo.txt", ios::in); // file open for reading:
    if (!fp)                             // error checker:
    {
        cout << "Error While Opening File: " << endl;
    }

    fp1.open("temp.txt", ios::out); // temporary file open for writing:
    if (!fp)                        // error checker:
    {
        cout << " Error while Opening file: " << endl;
    }

    while (fp.get(ch)) // read file:
    {
        fp1.put(ch); // copy file:
    }
    cout << "\n Data Copy successfully to temp file: " << endl;

    fp.close();
    fp1.close();

    rename("temp.txt", "Info.txt"); // rename "temp" to "Info":
    cout << "File rename successfully: " << endl;

    remove("CompanyDemo.txt"); // remove CompanyDemo file:
    cout << "Old file Delete Successfully: " << endl;

    return 0;
}