#include <iostream>
using namespace std;

int main()
{

    int *ptr;
    int arr[] = {1, 2, 3, 4};

    ptr = new int[6];
    if (!ptr)
    {
        for (int i = 0; i < 4; i++)
        {
            ptr[i] = arr[i];
        }
        for (int i = 0; i < 6; i++)
        {
            cout << ptr[i]<<" ";
        }
        delete [] ptr;
    }
    else
    {
        cout<<"failed to allocate memory!\n";
    }

    return 0;
}