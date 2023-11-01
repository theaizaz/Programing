#include<iostream>
using namespace std;

int main(){

    int a = 10;
    int& b = a; // l-value reference b only stores the address of a
    cout<<b<<endl;

    // r-value reference
    int&& c = 20; // r-value reference c stores the value 20
    cout<<c<<endl;    
    return 0;
}