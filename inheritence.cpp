#include <conio.h>
#include <iostream>
#include <stdio.h>
using namespace std;

class Employee
{
private:
    char name[30];
    unsigned long enumb;

public:
    void getdata()
    {
        cout << "Enter name: ";
        gets(name);
        cout << "Enter Employee Number: ";
        cin >> enumb;
    }
    void putdata()
    {
        cout << "Name: " << name << "\t";
        cout << "Emp. No: " << enumb << "\t";
        cout << "Basic Salary: " << basic;
    }

protected:
    float basic;
    void getbasic()
    {
        cout << "Enter Basic: ";
        cin >> basic;
    }
};
class Manager : public Employee
{
private:
    char title[30];

public:
    void getdata()
    {
        Employee::getdata();
        getbasic();
        cout << "Enter Title: ";
        gets(title);
    }
    void putdata()
    {
        Employee::putdata();
        cout << "\tTitle: " << title << "\n";
    }
};
void main()
{
    Manager m1, m2;
    cout << "Manager 1\n";
    m1.getdata();
    cout << "\nManager 2\n";
    m2.getdata();
    cout << "\n\t\tManager 1 Details\n";
    m1.putdata();
    cout << "\n\t\tManager 2 Details\n";
    m2.putdata();
    getch();
}