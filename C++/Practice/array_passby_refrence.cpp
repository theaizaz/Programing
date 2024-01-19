#include<iostream>
using namespace std;
void Array_by_refrence(int (&arr)[5])
{
    for (int i = 0; i < 5; i++)
    {
        arr[i] += 5;
    }
    
}
int main()
{
    int arr[]={1,2,3,4,5};
    Array_by_refrence(arr);
    for (int i = 0; i < 5; i++)
    {
        cout<<arr[i]<<" ";
    }
    
    return 0;
}