/*
    Constuctor:
        1) They can not return any value (no return type void)
        2) We cannot refer to their address
        3) Same name as class name
        4) Invoked automaticaly
*/

#include <iostream>
using namespace std;

class complex
{
private:
    int a, b;

public:
    complex(void);     // defult constructor init (should be in public)
    complex(int, int); // Parameterized constructor init (constructor overloading)
    complex(int);      // also constructor overloading
    complex(complex &obj); // Copying constructor (passing address of object)
    void display(void)
    {
        cout << "complex number are : " << a << " + " << b << "i" << endl;
    }
};

complex ::complex(void)
{ // default constructor definition (it didnt take any parameter), its must required in constructor overloading
    a = 10;
    b = 10;
}
complex ::complex(int n1, int n2)
{
    a = n1;
    b = n2;
}

// complex ::complex(int n1, int b = 0 ) // constructor with default arguments

complex ::complex(int n1)
{
    a = n1;
    b = 0;
}
complex ::complex(complex &obj) // When no copy constuctor declaration found, compiler supplies its own copy constructor 
{
    cout<<"Copy constructor called!\n";
    a = obj.a;
    b = obj.b;
}


int main()
{
    complex c1;
    c1.display();

    complex c2(22, 22); // impicit call
    // or complex c2 = complex(22,22) // -> this is explicit call
    c2.display();

    complex c3(33);
    c3.display();

    complex c4(c3); // copy constructor invoked!
    c4.display();

    complex c5 = c2; // copy constructor invoked! because object is fomed in same line of code
    c5.display();

    return 0;
}