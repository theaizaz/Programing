#include <iostream>
using namespace std;

class dynamicArray
{
private:
    int size;
    double *ptr;

public:
    dynamicArray() {}
    dynamicArray(int size_in) : size(size_in)
    {
        ptr = new double[size];
    }

 
    //Copy constructor for deep copy
    dynamicArray(const dynamicArray &obj) : size(obj.size), ptr(new double[obj.size])
    {
        // cout<<"Copy constructor for deep copy\n";
        // this is use when we use 
        //     darr2(darr) -> passing object as argument

    }

    // Assignment operator overload for deep copy
    dynamicArray &operator=(const dynamicArray &obj)
    {
        if (this == &obj) // Check for self-assignment
            return *this;

        delete[] ptr; // Delete the existing data

        ptr = new double[size];

        if (ptr == nullptr)
        {
            cout << "Memory allocation failed" << endl;
            exit(1);
        }
        else if (size == obj.size)
        {
            for (int i = 0; i < size; i++)
            {
                ptr[i] = obj.ptr[i];
            }
            cout << "Warning: Size of the array is equal to the size of the object" << endl;
        }
        else if (size > obj.size)
        {
            for (int i = 0; i < obj.size; i++)
            {
                ptr[i] = obj.ptr[i];
            }
            cout << "Warning: Size of the new array is greater than the size of the existing array" << endl;
        }
        else if (size < obj.size)
        {
            for (int i = 0; i < size; i++)
            {
                ptr[i] = obj.ptr[i];
            }
            cout << "Warning: Size of the object is greater than the size of the array" << endl;
        }

        return *this;
    }

    void setData(int index, double value)
    {
        ptr[index] = value;
    }

    void getData(int index)
    {
        if (index >= 0 && index < size)
        {
            cout << "Value at " << index << " is: " << ptr[index] << endl;
        }
        else
        {
            cout << "Index not found in dynamic Array" << endl;
        }
    }

    void printData()
    {
        for (int i = 0; i < size; i++)
        {
            cout << ptr[i] << " ";
        }
        cout << endl;
    }

    ~dynamicArray()
    {
        delete[] ptr;
    }
};

int main()
{
    dynamicArray darr(3);

    darr.setData(0, 10);
    darr.setData(1, 20);
    darr.setData(2, 30);

    dynamicArray darr2(6);

    darr2 = darr; // Deep copy using assignment operator
    darr2.setData(3, 10);
    darr2.setData(4, 20);
    darr2.setData(5, 30);

    darr.printData();

    darr2.setData(1, 22);

    darr2.printData();

    darr.printData();

    return 0;
}
