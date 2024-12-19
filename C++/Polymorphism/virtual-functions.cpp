#include <iostream>
using namespace std;

/* Base Class */
class MainTemplate
{
public:
    virtual void print(void)
    {
        cout << "This function will be replaced by derived class function\n";
    }
};

/* Derived Class */
class Test1 : public MainTemplate
{
public:
    /* 
    Using the 'override' keyword ensures that the compiler checks if this function is overriding
    a virtual function in the base class. If there is no exact match in the base class, the compiler
    will generate an error. This helps catch mistakes such as misspelled function names or incorrect
    function signatures while overriding a base class function. 
   */

    void print(void) override
    {
        cout << "This is from Derived class Test1\n";
    }
};

int main(void)
{

    /* object of derived class */
    Test1 T1;
    T1.print();

    return 0;
}