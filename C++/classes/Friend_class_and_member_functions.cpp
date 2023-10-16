#include <iostream>
using namespace std;

class sum; // Forward declaration
class complex;

class sum
{
public:
    int sumInt(int a, int b)
    {
        return (a + b);
    }
    complex sumComplex(complex o1, complex o2);
};

class complex
{
private:
    int a, b = 0;

public:
    // friend class sum ;//acessing whole class
    friend complex sum ::sumComplex(complex, complex);
    void setData(int n1, int n2)
    {
        a = n1;
        b = n2;
    }
    void Display()
    {
        cout << "Complex number is : " << a << " + " << b << "i" << endl;
    }
};
complex sum ::sumComplex(complex o1, complex o2)
{
    complex num;
    num.a = o1.a + o2.a;
    num.b = o1.b + o2.b;
    return num;
}

int main()
{
    complex n1, n2, sumComplex;
    sum result;

    n1.setData(1, 5);
    n2.setData(2, 6);

    sumComplex = result.sumComplex(n1, n2);
    sumComplex.Display();

    return 0;
}