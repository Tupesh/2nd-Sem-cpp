// open function demo
#include <fstream>

int main()
{
    std::fstream fs;
    fs.open("myfile.txt", std::fstream::in | std::fstream::out | std::fstream::app);
    fs << "Hello Kathmandu";
    fs.close();
    return 0;
}