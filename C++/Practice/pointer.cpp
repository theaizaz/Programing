#include<iostream>
using namespace std;
int main(){
    int a = 5;
    int* ptr = &a;
    cout<<"address of a is : "<<&a<<endl;
    cout<<"value in ptr is : "<<ptr<<endl;
    cout<<"*ptr  is        : "<<*ptr<<endl;
    

    int arr[] = {1,2,3,4,5};
    int n = sizeof(arr)/sizeof(arr[0]);
    int *ptr2 = arr;

    while (ptr2 < arr + n)
    {
        cout<<*ptr2<<endl;
        ptr2++;
    }
    return 0;
}