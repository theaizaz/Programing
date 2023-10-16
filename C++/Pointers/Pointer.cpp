/*
    Notes:
        1) Pointers are data type which holdes the address of another variables.
        2) As b contains a address so by cout<<b will print address of a, which is &a.
                 variable                                            pointer
                --------------------                            ---------------------
            a   |        3          | 0x43a1fff644            b |   0x43a1fff644     |  0xeca93ff800
                -------------------                             ---------------------
        
        3) * is called dereference operator, *b means value at address b ( 0x43a1fff644 ) which is 3.
        4) pointer to pointer variable are used to point out another pointer address
            e.g 
            int **c = &b;
            cout <<**c; --> dereferencing
        5) Array Name is the address of that array (address of first element of array).
            incrementing that address or pointer to that address will points the next element.
        6) ptr (address) < total 4 integer elements (4 elements x 4bytes) + address of first element,
            this will add up to last address of array    
*/


#include<iostream>
using namespace std;

int main(){
    int a = 3;
    int *b = &a;

    cout <<"value of a is   : "<<a<<endl;

    cout <<"Address of &a is        : "<<&a<<endl; // Note 2)
    cout <<"value stored in b is    : "<<b<<endl;  // Note 2)

    cout <<"Address of &b is        : "<<&b<<endl; // Note 2)

    cout <<"value at address b is   : "<<*b<<endl; // Note 3) 

    int marks[] = {55,60,65,70};
    int *ptr = marks; // Name of array
    int numElements = sizeof(marks)/sizeof(marks[0]);
    while(ptr < numElements + marks ) //Note 6
    {
        cout << "array values are "<<*ptr<<endl;
        ptr++;
    }
    return 0;
}