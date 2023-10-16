#include <iostream>
using namespace std;

#include "file_1.cpp"
#include "file_2.cpp"

int main()
{
    one::display();

    // or

    using namespace two;
    display();

    return 0;
}