/*
    Destructor never takes an argument not does it return any value.
    It deallocates the memory.
*/
#include <iostream>
using namespace std;

class dummy
{
public:
    dummy(void){
        cout << "constructor is called !\n";
    }
    ~dummy(void){
        cout << "distructor is called !\n";
    }
};



int main()
{
    dummy d;

    return 0;
}