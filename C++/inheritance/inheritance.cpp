/*
    Notes:
        1) Default visibility mode of Base class is private
        2) Public  visibilty mode : public members of the base class becomes public members of the derived class
        3) private visibilty mode : public members of the base class becomes private members of the derived class
        4) private members are never inherited
        5) protected members can be inherited, They will become protected members of derived class
        -----------------------------------------------------------------------------------------

        Multiple Inheritance          : A,B -> C
            syntex:
                class derived : public Base1, public Base2

        ------------------------------------------------------------------------------------------
*/

#include <iostream>
using namespace std;

class Employee
{
private:
    int age;
    int salary;

public:
    Employee() // defult constuctor
    {
        age = 0;
        salary = 0;
    }
    // Employee(int a, int s)
    // {
    //     age = a;
    //     salary = s;
    // }
    void EmployeeSetData(int a, int s)
    {
        age = a;
        salary = s;
    }
    void EmployeeGetData(void)
    {
        cout << "Employee age is    : " << age << "\nEmployee salary is : " << salary << endl;
    }
};

class programer : public Employee
{
    string lang;

public:
    programer()
    {
        lang = "None";
    }
    programer(string l)
    {
        lang = l;
    }
    void ProgGetData(void)
    {
        cout << "Progamer language is : " << lang << endl;
    }
};

int main()
{
    programer person("C++");
    person.EmployeeSetData(10, 20000);
    person.EmployeeGetData();
    person.ProgGetData();
    return 0;
}