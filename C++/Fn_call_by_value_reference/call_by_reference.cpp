/*
    Call by reference method pass the actual address of the variable , hence their changes happenes in orignal variables
*/

#include<iostream>
using namespace std;
void referenceSwap(int*,int*);
int main(){
    int a = 4;
    int b = 5;

    cout << "value of a "<<a<<endl<<"value of b "<<b<<endl<<endl;
    referenceSwap(&a , &b);
    cout << "value of a "<<a<<endl<<"value of b "<<b<<endl; //The vales wil not swap bc there copyies are passed to function swaped and destroyed
    
    return 0;
}
void referenceSwap(int *var1, int *var2)
{
    int temp = 0;
    temp = *var1;
    *var1 = *var2;
    *var2 = temp;
}