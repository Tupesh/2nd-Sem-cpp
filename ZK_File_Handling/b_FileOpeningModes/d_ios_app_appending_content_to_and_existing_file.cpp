#include <iostream>
#include <string>
#include <fstream>
using namespace std;

// using std::cout;
// using std::endl;
// using std::ios;
// using std::ofstream;
// using std::string;

int main()
{
    string text = "\n\n\n\n\n\t\t\t\t Sanothimi";
    ofstream writer("my_file.txt", ios::app);
    if (!writer)
    {
        cout << "Something went wrong.. " << endl;
        return -1;
    }
    writer << text << endl;
    writer.close();
    return 0;
}