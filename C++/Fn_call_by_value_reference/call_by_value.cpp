/*
    Call by value makes copy of orignal varables & make changes in it, it will
    not change orignal variables
*/ 

#include<iostream>
using namespace std;
void swap(int,int);
int main(){
    int a = 4;
    int b = 5;

    cout << "value of a "<<a<<endl<<"value of b "<<b<<endl<<endl;
    swap(a,b);
    cout << "value of a "<<a<<endl<<"value of b "<<b<<endl; //The vales wil not swap bc there copyies are passed to function swaped and destroyed
    
    return 0;
}
void swap(int var1, int var2)
{
    int temp = 0;
    temp = var1;
    var1 = var2;
    var2 = temp;
}