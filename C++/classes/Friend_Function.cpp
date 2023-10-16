/*
    1) Friend function is not in scope of class (only declaration are required!)
    2) As it is not in the scope so it can called form the object of the class
    3) It can be invoked without the help of object
    4) Usualy contains the objects as arguments
    5) can be decleared in public and private section of the class (declaration)
*/

#include <iostream>
using namespace std;

class complex
{
private:
    int a, b = 0;

public:
    friend complex sumNum(complex, complex);
    void setData(int n1, int n2)
    {
        a = n1;
        b = n2;
    }
    void Display(void)
    {
        cout << " your Complex number is : " << a << " + " << b << "i" << endl;
    }
};

complex sumNum(complex o1, complex o2)
{
    complex o3;
    o3.a = o1.a + o2.a;
    o3.b = o1.b + o2.b;

    cout << " Sum Complex number is : " << o3.a << " + " << o3.b << "i" << endl;

    return o3;
}

int main()
{
    complex num1, num2, sum;
    num1.setData(1, 3);
    num1.Display();

    num2.setData(4, 2);
    num2.Display();

    sum = sumNum(num1, num2);
    sum.Display();

    return 0;
}