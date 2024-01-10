/*Write() and Read() function Example: CompanyDemo*/
#include <fstream>  //required for file operation:
#include <iostream> //required for input/output:
using namespace std;

// we are using this class to get data from user and display:
class Employee
{
private: // private Members of class
    char name[30];
    char employe_ID[20];
    char joining_DATE[20];
    char position[20];
    char marital_status[10];
    char age[10];
    char salary[20];
    char comment[80];

public:
    void getEmp_data() // Get employee data:
    {
        cout << "Welcome To CompanyDemo: " << endl;
        cout << "======================";
        cout << "\n\n Employee Name: ";
        cin.getline(name, 30);
        cout << " Employee ID: ";
        cin.getline(employe_ID, 20);
        cout << " Joining Date: (DD/MM/YYYY) ";
        cin.getline(joining_DATE, 20);
        cout << " Job Description: ";
        cin.getline(position, 20);
        cout << " Single / Married: ";
        cin.getline(marital_status, 10);
        cout << " Employee Age: ";
        cin.getline(age, 10);
        cout << " Salary Per Month: $ ";
        cin.getline(salary, 20);
        cout << " Comment: ";
        cin.getline(comment, 80);
    }

    void showemp_data() // display Employee Data:
    {
        cout << "\n\nEMPLOYEE DATA: " << endl;
        cout << "=================================\n"
             << endl;
        cout << " Name: " << name << endl;
        cout << " Employee ID: " << employe_ID << endl;
        cout << " Position: " << position << endl;
        cout << " Date of joining: " << joining_DATE << endl;
        cout << " Age of Employee: " << age << endl;
        cout << " Total Salary: $ " << salary << endl;
        cout << " Maritial Status: " << marital_status << endl;
        cout << " Comment: " << comment << endl;
    }
};

/*we are using this class to write data into
  the file and read from file:*/
class Library
{
public:
    Employee Emp;    // Employee class object:
    fstream fp, fp1; // file object:

    void WriteEmployee() // Write Employee data into the file:
    {
        fp.open("Employee.txt", ios::out); // open file for writing:
        if (fp)                            // error chacker
        {
            Emp.getEmp_data();                   // funtion calling.
            fp.write((char *)&Emp, sizeof(Emp)); // Write into file:
            cout << "Record Store Successfully: " << endl;
        }
        fp.close();
    }

    void W_displayEmp() // display data from file:
    {
        fp.open("Employee.txt", ios::in); // Open same file for reading:
        if (fp)                           // error chacker
        {
            while (fp.read((char *)&Emp, sizeof(Emp))) // read data form file:
            {
                Emp.showemp_data(); // function calling
            }
            fp.close();
        }
    }
};

int main()
{
    Library lib;         // Library class object:
    lib.WriteEmployee(); // Write function calling:
    lib.W_displayEmp();  // display function calling:

    return 0;
}
